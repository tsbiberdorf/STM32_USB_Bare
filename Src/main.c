#include "Helpers/logger.h"
#include "usbd_framework.h"

uint32_t buffer[8];

int main(void)
{
	log_info("Program entry point.");

	usbd_initialize();

	for(;;)
	{
	}
}
