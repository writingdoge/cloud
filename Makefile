qsort:qsort.cpp
	gcc qsort.cpp -o qsort

.PHONY: clean

clean:
	rm qsort	# 注意开头的tab, 而不是空格