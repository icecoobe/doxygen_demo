/**
 * \file
 1.'\\file' 后面不能添加其他文本，否则会被 doxygen 忽略。
 2.doxygen 以空格来识别参数。
 所以, '\\param' 里面的参数名称后需要加上空格来区分参数和参数注释。
 3.需要使用斜杠来转义输出 doxygen 内置的一些标记，比如 '\\param'。
 \param a: xxxx (valid)
 \param a xxx   (valid)
 \param a:xxx	(invalid)
 */

/**
 * add
 * \param
 *	a: integer
 * \param
 *	b: integer
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub
 * \param
 *	a: integer
 * \param
 *	b integer
 * \return An integer, the result of sub
 */
int sub(int a, int b)
{
	return (a - b);
}
