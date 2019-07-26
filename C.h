#ifndef C_H
#define C_H
#include <Windows.h>
#pragma warning(disable:4005)
#ifdef EXP

	
		#define EasyX_C_API extern "C" __declspec(dllexport)
	#else
        #ifdef __cplusplus
            #define EasyX_C_API extern "C" __declspec(dllimport)
		#else
            #define EasyX_C_API  __declspec(dllimport)
		#endif // __cplusplus
#endif // !EXP
// 兼容 initgraph 绘图模式的宏定义（无实际意义）
#define DETECT	0
#define VGA		0
#define	VGALO	0
#define VGAMED	0
#define VGAHI	0
#define CGA		0
#define	CGAC0	0
#define	CGAC1	0
#define CGAC2	0
#define CGAC3	0
#define CGAHI	0
#define EGA		0
#define EGALO	0
#define	EGAHI	0
// 颜色
// 绘图窗口初始化参数
#define SHOWCONSOLE		1		// 创建图形窗口时，保留控制台的显示
#define NOCLOSE			2		// 没有关闭功能
#define NOMINIMIZE		4		// 没有最小化功能
#define	BLACK			0
#define	BLUE			0xAA0000
#define	GREEN			0x00AA00
#define	CYAN			0xAAAA00
#define	RED				0x0000AA
#define	MAGENTA			0xAA00AA
#define	BROWN			0x0055AA
#define	LIGHTGRAY		0xAAAAAA
#define	DARKGRAY		0x555555
#define	LIGHTBLUE		0xFF5555
#define	LIGHTGREEN		0x55FF55
#define	LIGHTCYAN		0xFFFF55
#define	LIGHTRED		0x5555FF
#define	LIGHTMAGENTA	0xFF55FF
#define	YELLOW			0x55FFFF
#define	WHITE			0xFFFFFF
// 以下填充样式不再使用，新的填充样式请参见帮助文件
#define	NULL_FILL			BS_NULL
#define	EMPTY_FILL			BS_NULL
#define	SOLID_FILL			BS_SOLID
// 普通一组
#define	BDIAGONAL_FILL		BS_HATCHED, HS_BDIAGONAL					// /// 填充 (对应 BGI 的 LTSLASH_FILL)
#define CROSS_FILL			BS_HATCHED, HS_CROSS						// +++ 填充
#define DIAGCROSS_FILL		BS_HATCHED, HS_DIAGCROSS					// xxx 填充 (heavy cross hatch fill) (对应 BGI 的 XHTACH_FILL)
#define DOT_FILL			(BYTE*)"\x80\x00\x08\x00\x80\x00\x08\x00"	// xxx 填充 (对应 BGI 的 WIDE_DOT_FILL)	
#define FDIAGONAL_FILL		BS_HATCHED, HS_FDIAGONAL					// \\\ 填充
#define HORIZONTAL_FILL		BS_HATCHED, HS_HORIZONTAL					// === 填充
#define VERTICAL_FILL		BS_HATCHED, HS_VERTICAL						// ||| 填充
// 密集一组
#define BDIAGONAL2_FILL		(BYTE*)"\x44\x88\x11\x22\x44\x88\x11\x22"
#define CROSS2_FILL			(BYTE*)"\xff\x11\x11\x11\xff\x11\x11\x11"	// (对应 BGI 的 fill HATCH_FILL)
#define DIAGCROSS2_FILL		(BYTE*)"\x55\x88\x55\x22\x55\x88\x55\x22"
#define DOT2_FILL			(BYTE*)"\x88\x00\x22\x00\x88\x00\x22\x00"	// (对应 BGI 的 CLOSE_DOT_FILL)
#define FDIAGONAL2_FILL		(BYTE*)"\x22\x11\x88\x44\x22\x11\x88\x44"
#define HORIZONTAL2_FILL	(BYTE*)"\x00\x00\xff\x00\x00\x00\xff\x00"
#define VERTICAL2_FILL		(BYTE*)"\x11\x11\x11\x11\x11\x11\x11\x11"
// 粗线一组
#define BDIAGONAL3_FILL		(BYTE*)"\xe0\xc1\x83\x07\x0e\x1c\x38\x70"	// (对应 BGI 的 SLASH_FILL)
#define CROSS3_FILL			(BYTE*)"\x30\x30\x30\x30\x30\x30\xff\xff"
#define DIAGCROSS3_FILL		(BYTE*)"\xc7\x83\xc7\xee\x7c\x38\x7c\xee"
#define DOT3_FILL			(BYTE*)"\xc0\xc0\x0c\x0c\xc0\xc0\x0c\x0c"
#define FDIAGONAL3_FILL		(BYTE*)"\x07\x83\xc1\xe0\x70\x38\x1c\x0e"
#define HORIZONTAL3_FILL	(BYTE*)"\xff\xff\x00\x00\xff\xff\x00\x00"	// (对应 BGI 的 LINE_FILL)	
#define VERTICAL3_FILL		(BYTE*)"\x33\x33\x33\x33\x33\x33\x33\x33"
// 其它
#define INTERLEAVE_FILL		(BYTE*)"\xcc\x33\xcc\x33\xcc\x33\xcc\x33"	// (对应 BGI 的 INTERLEAVE_FILL)


#ifndef BGR
#define BGR(color)	( (((color) & 0xFF) << 16) | ((color) & 0xFF00FF00) | (((color) & 0xFF0000) >> 16) )
#endif
#ifndef GetRValue
#define GetRValue(rgb)      (LOBYTE(rgb))
#define GetGValue(rgb)      (LOBYTE(((WORD)(rgb)) >> 8))
#define GetBValue(rgb)      (LOBYTE((rgb)>>16))
#endif
#define bool int
typedef void* IMAGE;
typedef void* FILLSTYLE;
typedef void* LINESTYLE;
#ifndef _T
	#ifndef UNICODE
		#define _T(a) a
		#define TEXT(a) a
	#else
		#define _T(a) L##a
		#define TEXT(a) L##a
	#endif // !Unicode
#endif
	EasyX_C_API HWND  __stdcall	initgraph_bgi(int* gdriver, int* gmode, char* path);
	EasyX_C_API HWND __stdcall initgraph_with_flag(int width, int height, int flag);
#if defined(__cplusplus) && !defined(EXP)
	HWND __stdcall initgraph(int width, int height, int flag=NULL) {
		return initgraph_with_flag(width, height, flag);
	}
	HWND __stdcall initgraph(int *gdriver, int *gmode, char *path) {
		return initgraph_bgi(gdriver, gmode, path);
	}
#else
	EasyX_C_API HWND __stdcall initgraph(int width, int height);
#endif // 
	EasyX_C_API void __stdcall closegraph();
	EasyX_C_API void __stdcall cleardevice();
	EasyX_C_API void __stdcall clearcliprgn();
	EasyX_C_API void __stdcall getaspectratio(float *pxasp,float *pyasp);
	EasyX_C_API void __stdcall graphdefaults();
	EasyX_C_API void __stdcall setaspectratio(
		float xasp,
		float yasp
	);
	EasyX_C_API void __stdcall setcliprgn(HRGN hrgn);
	// 颜色模型转换函数
	EasyX_C_API COLORREF __stdcall RGBtoGRAY(COLORREF rgb);
	EasyX_C_API void __stdcall RGBtoHSL(COLORREF rgb, float *H, float *S, float *L);
	EasyX_C_API void __stdcall RGBtoHSV(COLORREF rgb, float *H, float *S, float *V);
	EasyX_C_API COLORREF __stdcall HSLtoRGB(float H, float S, float L);
	EasyX_C_API COLORREF __stdcall HSVtoRGB(float H, float S, float V);


	EasyX_C_API COLORREF __stdcall  getlinecolor();			// 获取当前线条颜色
	EasyX_C_API void __stdcall  setlinecolor(COLORREF color);	// 设置当前线条颜色
	EasyX_C_API COLORREF __stdcall  gettextcolor();			// 获取当前文字颜色
	EasyX_C_API void  __stdcall settextcolor(COLORREF color);	// 设置当前文字颜色
	EasyX_C_API COLORREF __stdcall  getfillcolor();			// 获取当前填充颜色
	EasyX_C_API void  __stdcall setfillcolor(COLORREF color);	// 设置当前填充颜色
	EasyX_C_API COLORREF  __stdcall getbkcolor();				// 获取当前绘图背景色
	EasyX_C_API void  __stdcall setbkcolor(COLORREF color);	// 设置当前绘图背景色
	EasyX_C_API int   __stdcall getbkmode();					// 获取背景混合模式
	EasyX_C_API void  __stdcall setbkmode(int mode);			// 设置背景混合模式
	EasyX_C_API int  __stdcall  getrop2();						// 获取前景的二元光栅操作模式
	EasyX_C_API void  __stdcall setrop2(int mode);				// 设置前景的二元光栅操作模式
	EasyX_C_API int  __stdcall  getpolyfillmode();				// 获取多边形填充模式
	EasyX_C_API void  __stdcall setpolyfillmode(int mode);		// 设置多边形填充模式




	// 绘图函数

	EasyX_C_API COLORREF  __stdcall getpixel(int x, int y);				// 获取点的颜色
	EasyX_C_API void  __stdcall putpixel(int x, int y, COLORREF color);	// 画点

	EasyX_C_API void  __stdcall moveto(int x, int y);						// 移动当前点(绝对坐标)
	EasyX_C_API void  __stdcall moverel(int dx, int dy);					// 移动当前点(相对坐标)

	EasyX_C_API void  __stdcall line(int x1, int y1, int x2, int y2);		// 画线
	EasyX_C_API void  __stdcall linerel(int dx, int dy);					// 画线(至相对坐标)
	EasyX_C_API void  __stdcall lineto(int x, int y);						// 画线(至绝对坐标)

	EasyX_C_API void  __stdcall rectangle(int left, int top, int right, int bottom);	// 画矩形
	EasyX_C_API void  __stdcall fillrectangle(int left, int top, int right, int bottom);	// 画填充矩形(有边框)
	EasyX_C_API void  __stdcall solidrectangle(int left, int top, int right, int bottom);	// 画填充矩形(无边框)
	EasyX_C_API void  __stdcall clearrectangle(int left, int top, int right, int bottom);	// 清空矩形区域

	EasyX_C_API void  __stdcall circle(int x, int y, int radius);		// 画圆
	EasyX_C_API void  __stdcall fillcircle(int x, int y, int radius);		// 画填充圆(有边框)
	EasyX_C_API void  __stdcall solidcircle(int x, int y, int radius);		// 画填充圆(无边框)
	EasyX_C_API void  __stdcall clearcircle(int x, int y, int radius);		// 清空圆形区域

	EasyX_C_API void  __stdcall ellipse(int left, int top, int right, int bottom);	// 画椭圆
	EasyX_C_API void  __stdcall fillellipse(int left, int top, int right, int bottom);	// 画填充椭圆(有边框)
	EasyX_C_API void  __stdcall solidellipse(int left, int top, int right, int bottom);	// 画填充椭圆(无边框)
	EasyX_C_API void  __stdcall clearellipse(int left, int top, int right, int bottom);	// 清空椭圆形区域

	EasyX_C_API void  __stdcall roundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画圆角矩形
	EasyX_C_API void  __stdcall fillroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画填充圆角矩形(有边框)
	EasyX_C_API void  __stdcall solidroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画填充圆角矩形(无边框)
	EasyX_C_API void  __stdcall clearroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 清空圆角矩形区域

	EasyX_C_API void  __stdcall arc(int left, int top, int right, int bottom, double stangle, double endangle);	// 画椭圆弧(起始角度和终止角度为弧度制)
	EasyX_C_API void __stdcall  pie(int left, int top, int right, int bottom, double stangle, double endangle);	// 画椭圆扇形(起始角度和终止角度为弧度制)
	EasyX_C_API void  __stdcall fillpie(int left, int top, int right, int bottom, double stangle, double endangle);	// 画填充椭圆扇形(有边框)
	EasyX_C_API void  __stdcall solidpie(int left, int top, int right, int bottom, double stangle, double endangle);	// 画填充椭圆扇形(无边框)
	EasyX_C_API void  __stdcall clearpie(int left, int top, int right, int bottom, double stangle, double endangle);	// 清空椭圆扇形区域

	EasyX_C_API void  __stdcall polyline(const POINT *points, int num);								// 画多条连续的线
	EasyX_C_API void  __stdcall polygon(const POINT *points, int num);								// 画多边形
	EasyX_C_API void  __stdcall fillpolygon(const POINT *points, int num);								// 画填充的多边形(有边框)
	EasyX_C_API void  __stdcall solidpolygon(const POINT *points, int num);								// 画填充的多边形(无边框)
	EasyX_C_API void  __stdcall clearpolygon(const POINT *points, int num);								// 清空多边形区域

	EasyX_C_API void  __stdcall polybezier(const POINT *points, int num);									// 画贝塞尔曲线
	EasyX_C_API void  __stdcall floodfill(int x, int y, COLORREF color);	// 填充区域
	EasyX_C_API void  __stdcall floodfill_with_type(int x, int y, COLORREF color, int filltype);



	// 文字相关函数

				// 在当前位置输出字符串
	EasyX_C_API void  __stdcall outtext_tchar(TCHAR c);						// 在当前位置输出字符
	EasyX_C_API void  __stdcall outtextxy(int x, int y, LPCTSTR str);	// 在指定位置输出字符串
	EasyX_C_API void  __stdcall outtextxy_tchar(int x, int y, TCHAR c);		// 在指定位置输出字符
	EasyX_C_API int  __stdcall textwidth(LPCTSTR str);					// 获取字符串占用的像素宽
	EasyX_C_API int  __stdcall textwidth_tchar(TCHAR c);						// 获取字符占用的像素宽
	EasyX_C_API int  __stdcall textheight(LPCTSTR str);				// 获取字符串占用的像素高
	EasyX_C_API int  __stdcall textheight_tchar(TCHAR c);					// 获取字符占用的像素高
	EasyX_C_API int  __stdcall drawtext(LPCTSTR str, RECT* pRect, UINT uFormat);	// 在指定区域内以指定格式输出字符串
	EasyX_C_API int  __stdcall drawtext_tchar(TCHAR c, RECT* pRect, UINT uFormat);		// 在指定区域内以指定格式输出字符
#if defined(__cplusplus) && !defined(EXP)
	void  __stdcall outtext(TCHAR c) {
		outtext_tchar(c);
	}
	void  __stdcall outtextxy(int x,int y,TCHAR c) {
		outtextxy_tchar(x,y,c);
	}
	int  __stdcall textwidth(TCHAR c) {
		return textwidth_tchar(c);
	}
	int  __stdcall textHeight(TCHAR c) {
		return textheight_tchar(c);
	}
	int  __stdcall drawtext(TCHAR c, RECT* pRect, UINT uFormat) {
		return drawtext_tchar(c, pRect, uFormat);
	}
#endif

	EasyX_C_API void __stdcall	getlinestyle(LINESTYLE* pstyle);						// 获取当前画线样式
	EasyX_C_API void  __stdcall setlinestyle(const LINESTYLE* pstyle);					// 设置当前画线样式
	EasyX_C_API void  __stdcall setlinestyle_with_style(int style);	// 设置当前画线样式
	EasyX_C_API void  __stdcall setlinestyle_with_style_thickness(int style, int thickness);
	EasyX_C_API void  __stdcall setlinestyle_with_thickness_style_puserstyle_puserstylecount(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount);	// 设置当前画线样式
	EasyX_C_API void  __stdcall getfillstyle(FILLSTYLE* pstyle);						// 获取当前填充样式
	EasyX_C_API void  __stdcall setfillstyle(const FILLSTYLE* pstyle);					// 设置当前填充样式
	EasyX_C_API void  __stdcall setfillstyle_with_style(int style);		// 设置当前填充样式
	EasyX_C_API void  __stdcall setfillstyle_with_style_hatch(int style,  long hatch);
	EasyX_C_API void  __stdcall setfillstyle_with_style_pattern(int style,  long hatch,IMAGE* ppattern);
	
	EasyX_C_API void  __stdcall setfillstyle_with_pattern8x8(BYTE* ppattern8x8);						// 设置当前填充样式
#if defined(__cplusplus) && !defined(EXP)
	void setlinestyle(int style, int thickness = 1, const DWORD *puserstyle = NULL, DWORD userstylecount = 0) {
		setlinestyle_with_thickness_style_puserstyle_puserstylecount(style, thickness, puserstyle, userstylecount);
	}	// 设置当前画线样式
	void  __stdcall setlinestyle(int style) {
		setlinestyle_with_style(style);
	}
	void  __stdcall setfillstyle(int style, long hatch = NULL, IMAGE* ppattern = NULL) {
		setfillstyle_with_style_pattern(style, hatch, ppattern);
	}
	void  __stdcall setfillstyle(BYTE* ppattern8x8) {
		setfillstyle_with_pattern8x8(ppattern8x8);
	}
#endif
	EasyX_C_API bool __stdcall MouseHit();			// 检查是否存在鼠标消息
#ifndef __cplusplus
 typedef struct{
		UINT uMsg;				// 当前鼠标消息
		bool mkCtrl;			// Ctrl 键是否按下
		bool mkShift;			// Shift 键是否按下
		bool mkLButton;			// 鼠标左键是否按下
		bool mkMButton;			// 鼠标中键是否按下
		bool mkRButton;			// 鼠标右键是否按下
		short x;				// 当前鼠标 x 坐标
		short y;				// 当前鼠标 y 坐标
		short wheel;			// 鼠标滚轮滚动值 (120 的倍数)
	}MOUSEMSG;
#else
	extern "C" typedef struct{
		UINT uMsg;				// 当前鼠标消息
		bool mkCtrl;			// Ctrl 键是否按下
		bool mkShift;			// Shift 键是否按下
		bool mkLButton;			// 鼠标左键是否按下
		bool mkMButton;			// 鼠标中键是否按下
		bool mkRButton;			// 鼠标右键是否按下
		short x;				// 当前鼠标 x 坐标
		short y;				// 当前鼠标 y 坐标
		short wheel;			// 鼠标滚轮滚动值 (120 的倍数)
	}MOUSEMSG;
#endif // !__cplusplus
		EasyX_C_API MOUSEMSG __stdcall GetMouseMsg();
		// 获取一个鼠标消息。如果没有，就等待

	EasyX_C_API void __stdcall FlushMouseMsgBuffer();	// 清空鼠标消息缓冲区
	EasyX_C_API LINESTYLE __stdcall CreateLS();
	EasyX_C_API LINESTYLE __stdcall CreateLSFromLS(LINESTYLE s);
	EasyX_C_API void __stdcall SetLS_Style(LINESTYLE s, DWORD style);
	EasyX_C_API void __stdcall SetLS_Puserstyle(LINESTYLE s, DWORD *puserstyle);
	EasyX_C_API void __stdcall SetLS_Userstylecount(LINESTYLE s, DWORD userstylecount);
	EasyX_C_API FILLSTYLE __stdcall CreateFS();
	EasyX_C_API FILLSTYLE __stdcall CreateFSFromFS(FILLSTYLE s);
	EasyX_C_API void __stdcall SetFS_Style(FILLSTYLE s, int style);
	EasyX_C_API void __stdcall SetFS_hatch(FILLSTYLE s, long hatch);
	EasyX_C_API void __stdcall SetFS_ppattern(FILLSTYLE s, IMAGE *ppattern);
	EasyX_C_API IMAGE __stdcall CreateI();
	EasyX_C_API IMAGE __stdcall CreateIFromI(IMAGE i);
	EasyX_C_API IMAGE __stdcall CreateIFromWH(int _width,int _height);
	EasyX_C_API int __stdcall GetIW(IMAGE i);
	EasyX_C_API int __stdcall GetIH(IMAGE i);
	EasyX_C_API void __stdcall ResizeI(IMAGE i,int _weight,int _height);

	EasyX_C_API void __stdcall settextstyle1(int nHeight, int nWidth, LPCTSTR lpszFace);
	EasyX_C_API void __stdcall settextstyle2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
	EasyX_C_API void __stdcall settextstyle3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
	EasyX_C_API void __stdcall settextstyle4(const LOGFONT *font);	// 设置当前字体样式
	EasyX_C_API void __stdcall gettextstyle(LOGFONT *font);		// 获取当前字体样式
	EasyX_C_API void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace);

	EasyX_C_API void __stdcall loadimage1(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight);					// 从图片文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
	EasyX_C_API void __stdcall loadimage2(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth , int nHeight, bool bResize);	// 从资源文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
	EasyX_C_API void __stdcall loadimage3(IMAGE *pDstImg, LPCTSTR pImgFile);
	EasyX_C_API void __stdcall loadimage4(IMAGE *pDstImg, LPCTSTR pImgFile,int nWidth, int nHeight, bool bResize);
	EasyX_C_API void __stdcall saveimage(LPCTSTR pImgFile, IMAGE* pImg);																		// 保存图像(bmp/gif/jpg/png/tif)
	EasyX_C_API void __stdcall getimage(IMAGE *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight);// 从当前绘图设备获取图像
	
#if defined(__cplusplus) && !defined(EXP)
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace) {
		settextstyle1(nHeight, nWidth, lpszFace);
	}
	void __stdcall settextstyle(const LOGFONT *font) {
		settextstyle4(font);
	}
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
		settextstyle3(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
	}
	void __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
		settextstyle2(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
	}
	void loadimage(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth = 0, int nHeight = 0, bool bResize = false) {
		loadimage4(pDstImg, pImgFile, nWidth, nHeight, bResize);
	}					// 从图片文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
	void loadimage(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth = 0, int nHeight = 0, bool bResize = false) {
		loadimage2((pDstImg),pResType, pResName, nWidth, nHeight, bResize);
	}	// 从资源文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
#endif 


	EasyX_C_API void __stdcall putimage1(int dstX, int dstY, const IMAGE *pSrcImg);												// 绘制图像到屏幕
	EasyX_C_API void __stdcall loadimage(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight);
	EasyX_C_API void __stdcall putimage2(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop);												// 绘制图像到屏幕
#if !defined(__cplusplus) && !defined(EXP)
	void __stdcall putimage(int dstX, int dstY, const IMAGE *pSrcImg) {
		putimage1(dstX, dstY, pSrcImg);
	}
#endif
	EasyX_C_API void __stdcall putimage3(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop);		// 绘制图像到屏幕(指定宽高)
	EasyX_C_API void __stdcall rotateimage(IMAGE *dstimg, IMAGE *srcimg, double radian, COLORREF bkcolor , bool autosize, bool highquality);// 旋转图像
	EasyX_C_API void __stdcall Resize(IMAGE* pImg, int width, int height);	// 调整绘图设备的大小
	EasyX_C_API DWORD* __stdcall GetImageBuffer(IMAGE* pImg);			// 获取绘图设备的显存指针//默认可以NULL
	EasyX_C_API IMAGE* __stdcall GetWorkingImage();							// 获取当前绘图设备
	EasyX_C_API void __stdcall SetWorkingImage(IMAGE* pImg);			// 设置当前绘图设备//默认可以NULL
	EasyX_C_API HDC __stdcall GetImageHDC(IMAGE* pImg );				// 获取绘图设备句柄(HDC)//默认可以NULL
#if defined(__cplusplus) && !defined(EXP)
	void putimage(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop = SRCCOPY) {
		putimage2(dstX, dstY, pSrcImg, dwRop);
	}											// 绘制图像到屏幕
	void putimage(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY) {
		putimage3(dstX, dstY, dstWidth, dstHeight, pSrcImg, srcX, srcY, dwRop);
	}		// 绘制图像到屏幕(指定宽高)
#endif
													//未写
													// 其它函数

	EasyX_C_API int __stdcall	getwidth();			// 获取绘图区宽度
	EasyX_C_API int	__stdcall	getheight();		// 获取绘图区高度
	EasyX_C_API int	__stdcall	getx();				// 获取当前 x 坐标
	EasyX_C_API int	__stdcall	gety();				// 获取当前 y 坐标

	EasyX_C_API void __stdcall	BeginBatchDraw();	// 开始批量绘制
	EasyX_C_API void __stdcall	FlushBatchDraw1();	// 执行未完成的绘制任务
	EasyX_C_API void __stdcall	FlushBatchDraw2(int left, int top, int right, int bottom);	// 执行指定区域内未完成的绘制任务
	EasyX_C_API void __stdcall	EndBatchDraw1();	// 结束批量绘制，并执行未完成的绘制任务
	EasyX_C_API void __stdcall	EndBatchDraw2(int left, int top, int right, int bottom);	// 结束批量绘制，并执行指定区域内未完成的绘制任务
#if defined(__cplusplus) && !defined(EXP)
	void __stdcall	FlushBatchDraw(){
		FlushBatchDraw1();
	}
	void __stdcall	FlushBatchDraw(int left, int top, int right, int bottom) {
		FlushBatchDraw2(left, top, right, bottom);
	}
	void __stdcall	EndBatchDraw() {
		EndBatchDraw1();
	}
	void __stdcall EndBathDraw(int left, int top, int right, int bottom) {
		EndBatchDraw2(left, top, right, bottom);
	}
#endif
	EasyX_C_API HWND __stdcall	GetHWnd();								// 获取绘图窗口句柄(HWND)
	EasyX_C_API TCHAR* __stdcall	GetEasyXVer();						// 获取 EasyX 当前版本

											// 获取用户输入
	EasyX_C_API bool __stdcall	InputBox1(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt , LPCTSTR pTitle, LPCTSTR pDefault, int width , int height, bool bOnlyOK);
	EasyX_C_API bool __stdcall	InputBox2(LPTSTR pString,int nMaxCount);
#if defined(__cplusplus) && !defined(EXP)
	bool InputBox(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt = NULL, LPCTSTR pTitle = NULL, LPCTSTR pDefault = NULL, int width = 0, int height = 0, bool bOnlyOK = true) {
		return InputBox1(pString, nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
	}
#endif


	EasyX_C_API void  __stdcall	bar(int left, int top, int right, int bottom);		// 画无边框填充矩形
	EasyX_C_API void  __stdcall	bar3d(int left, int top, int right, int bottom, int depth, bool topflag);	// 画有边框三维填充矩形

	EasyX_C_API void  __stdcall	drawpoly(int numpoints, const int *polypoints);	// 画多边形
	EasyX_C_API void  __stdcall	fillpoly(int numpoints, const int *polypoints);	// 画填充的多边形

	EasyX_C_API int  __stdcall	getmaxx();					// 获取最大的宽度值
	EasyX_C_API int  __stdcall	getmaxy();					// 获取最大的高度值

	EasyX_C_API COLORREF  __stdcall	getcolor();			// 获取当前绘图前景色
	EasyX_C_API void  __stdcall	setcolor(COLORREF color);	// 设置当前绘图前景色

	EasyX_C_API void  __stdcall	setwritemode(int mode);	// 设置前景的二元光栅操作模式


	EasyX_C_API void  __stdcall	setfont1(int nHeight, int nWidth, LPCTSTR lpszFace);
	EasyX_C_API void  __stdcall	setfont2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
	EasyX_C_API void  __stdcall	setfont3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
	EasyX_C_API void  __stdcall	setfont4(const LOGFONT *font);	// 设置当前字体样式
	EasyX_C_API void  __stdcall	getfont5(LOGFONT *font);
	EasyX_C_API void __stdcall setfont(int nHeight, int nWidth, LPCTSTR lpszFace);



	EasyX_C_API void __stdcall ainit();
	EasyX_C_API void __stdcall auninit();
	EasyX_C_API void __stdcall loadimagea1(IMAGE *pSrcImg,LPCTSTR pImgFile,bool bResize,int rWidth,int rHeight,bool bMove,int mX,int mY);
	EasyX_C_API void __stdcall loadimagea2(IMAGE *pSrcImg,LPCTSTR pResType, LPCTSTR pResName,bool bResize,int rWidth,int rHeight,bool bMove,int mX,int mY);
#if defined(__cplusplus) && !defined(EXP)
	void loadimagea(IMAGE *pSrcImg, LPCTSTR pImgFile, bool bResize = false, int rWidth = 0,int rHeight = 0, bool bMove = false, int mX = 0, int mY = 0) {
		loadimagea1(pSrcImg, pImgFile,bResize,rWidth,rHeight,bMove,mX,mY);
	}
	void loadimagea(IMAGE *pSrcImg, LPCTSTR pResType, LPCTSTR pResName, bool bResize = false, int rWidth = 0,int rHeight = 0, bool bMove = false, int mX = 0, int mY = 0) {
		loadimagea2(pSrcImg, pResType, pResName,bResize,rWidth,rHeight,bMove,mX,mY);
	}

#endif
	struct AIMAGE_INFORMATION{
		int m_Width;
		int m_Height;
	};
	EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION1(LPCTSTR pImgFile);
	EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName);
#if defined(__cplusplus) && !defined(EXP)
	struct AIMAGE_INFORMATION getAIMAGE_INFORMATION(LPCTSTR pImgFile) {
		return  getAIMAGE_INFORMATION1(pImgFile);
	}
	struct AIMAGE_INFORMATION getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName) {
		return  getAIMAGE_INFORMATION2(pResType,pResName);
	}
#endif
#endif
