#include "filler.h"

int		main(int ac, char **av)
{
	t_env	e;
	char	*line;

	//DEBUG
	e.fd = open("file_debug", O_RDWR);



	//MAIN
	infos(&e);



	//DEBUG
	dprintf(e.fd, "Player ID: %d\n", e.p.id);
	dprintf(e.fd, "Size Y: %d\n", e.tab_size.y);
	dprintf(e.fd, "Size X: %d\n", e.tab_size.x);
	dprintf(e.fd, "Origin Y: %d\n", e.p.og.y);
	dprintf(e.fd, "Origin X: %d\n\n", e.p.og.x);
	int x = -1;
	int y = -1;
	while (++y < e.tab_size.y)
	{
		while (++x < e.tab_size.x)
			dprintf(e.fd, "%d", e.tab[y][x]);
		dprintf(e.fd, "\n");
		x = -1;
	}
	return (0);
}