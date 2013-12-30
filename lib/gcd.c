#include <linux/kernel.h>
#include <linux/gcd.h>
#include <linux/export.h>

/* Greatest common divisor */
unsigned long gcd(unsigned long a, unsigned long b)
{
	unsigned long r;

	if (a < b)
		swap(a, b);
<<<<<<< HEAD

	if (!b)
		return a;
=======
>>>>>>> 7175f4b... Truncated history
	while ((r = a % b) != 0) {
		a = b;
		b = r;
	}
	return b;
}
EXPORT_SYMBOL_GPL(gcd);
