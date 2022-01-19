/*
** EPITECH PROJECT, 2021
** my_csfml
** File description:
** Wrapper for csfml lib
*/

#ifndef MY_CSFML_H_
    #define MY_CSFML_H_

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>

static const int BIT_PER_PX = 32;
static const int BYTE_PER_PX = 4;
static const int FPS_LIMIT = 60;
static const float SPRITE_ANIMATION_TIME = 0.05;
static const float SPRITE_VEL_X = 0;
static const float SPRITE_VEL_Y = -400.0;

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f vel;
} sprite_t;

typedef struct clocks_s {
    sfClock *animation_clock;
    sfClock *spawn_clock;
    sfClock *bg_clock;
    sfClock *generic_clock;
} clocks_t;

typedef struct events_s {
    sfKeyCode key_pressed;
    sfMouseButton mouse_pressed;
    int mouse_x;
    int mouse_y;
} events_t;

typedef struct game_s {
    sfRenderWindow *window;
    clocks_t *clocks;
    events_t *events;
} game_t;

clocks_t *create_clocks(void);
events_t *create_events(void);
game_t *create_game(int w_width, int w_height, char *title);
sprite_t *create_sprite(sfVector2f pos, sfVector2i rect_size,
    sfVector2f vel, const char *img);

void destroy_clocks(clocks_t *clocks);
void destroy_events(events_t *events);
void destroy_game(game_t *game);
void destroy_sprite(sprite_t *sprite);

void listen_for_events(game_t *game);
int check_sprite_collision(sprite_t *sprite, int x, int y, int margin);

void animate_sprite(sprite_t *sprite, sfClock *clock, int animations_nb);

void render_sprite(sprite_t *sprite, sfRenderWindow *window);

float get_elapsed_sec(sfClock *clock);

#endif
