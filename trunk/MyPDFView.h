//
//  MyPDFView.h
//  FormulatePro
//
//  Created by Andrew de los Reyes on 7/4/06.
//  Copyright 2006 Andrew de los Reyes. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@class FPGraphic;

@interface MyPDFView : PDFView {
    NSMutableArray *_overlayGraphics;
    NSMutableSet *_selectedGraphics;
    FPGraphic *_editingGraphic;
}

// returns point in coordinates of the page 'out_page'. out_page is set to the proper page from the PDFDocument.
- (NSPoint)convertPointFromEvent:(NSEvent *)event toPage:(PDFPage **)out_page;
- (NSPoint)pagePointForPointFromEvent:(NSEvent *)event page:(PDFPage *)page;
- (void)moveSelectionWithEvent:(NSEvent *)theEvent;

@end