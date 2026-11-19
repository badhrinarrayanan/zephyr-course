#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main(void)
{
    if (IS_ENABLED(CONFIG_LED_SUBSYSTEM)) {
        printk("LED Subsystem Enabled! Sleep time: %d ms\n", CONFIG_BLINK_SLEEP_TIME_MS);
    }

    if (IS_ENABLED(CONFIG_ADVANCED_LED_SETTINGS)) {
        printk("Brightness: %d%%, Fade: %d ms\n",
               CONFIG_LED_BRIGHTNESS, CONFIG_LED_FADE_DURATION_MS);
    }

    return 0;
}