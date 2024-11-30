#include "splashkit.h"

const int CIRCLE_RADIUS = 150;

int main()
{
    open_window("Circle Moving", 800, 600);

    int x = 400;
    int y = 300;

    color circle_color = COLOR_GREEN;

    do
    {
        process_events();

        if (key_down(LEFT_KEY) and x > CIRCLE_RADIUS)
        {
            x = x - 1;
        }

        if (key_down(RIGHT_KEY) and x < screen_width() - CIRCLE_RADIUS)
        {
            x = x + 1;
        }

        if (key_down(UP_KEY) and y > CIRCLE_RADIUS)
        {
            y = y - 1;
        }

        if (key_down(DOWN_KEY) and y < screen_height() - CIRCLE_RADIUS)
        {
            y = y + 1;
        }

        if (key_typed(B_KEY))
        {
            circle_color = COLOR_BLUE;
        }

        clear_screen(COLOR_WHITE);

        fill_circle(circle_color, x, y, CIRCLE_RADIUS);

        refresh_screen(60);
    } while (!quit_requested());

    return 0;
}