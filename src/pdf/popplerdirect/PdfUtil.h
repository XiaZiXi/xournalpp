/*
 * Xournal++
 *
 * Part of the PDF export
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv3
 */

#pragma once

class PdfUtil
{
private:
	PdfUtil();
	virtual ~PdfUtil();

public:
	static bool isWhitespace(int c);
};
