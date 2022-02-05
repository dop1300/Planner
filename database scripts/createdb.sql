CREATE TABLE categories (
	"name" varchar(64),
	id int,
	PRIMARY KEY (id)
);

CREATE TABLE events (
	"name" varchar(128),
	priority int,
	done bool,
	category_id int,
	"start" timestamp,
	"end" TIMESTAMP,
	PRIMARY KEY ("name"),
	FOREIGN KEY (category_id) REFERENCES public.categories("id")
);

	