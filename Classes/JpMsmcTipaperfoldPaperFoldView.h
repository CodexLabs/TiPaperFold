//
//  JpMsmcTipaperfoldPaperFoldView.h
//  tipapaerfold
//
//  Created by MARSHMALLOW MACHINE on 2012/08/11.
//
//

#import "TiUIView.h"
#import "PaperFoldView.h"

@interface JpMsmcTipaperfoldPaperFoldView : TiUIView <PaperFoldViewDelegate>
{
    PaperFoldView *paperFoldView;
    UIView *leftView;
    int foldCount;
    float pullFactor;
    UIView *centerView;
    UIView *rightView;
}
@end
