//
//  OPViewController.h
//  OpenPics
//
//  Created by PJ Gray on 4/6/13.
//  Copyright (c) 2013 Say Goodnight Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPHeaderReusableView.h"
#import "OPProviderListViewController.h"

@interface OPViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, OPHeaderDelegate, OPProviderListDelegate>

@property (strong, nonatomic) IBOutlet UICollectionView *internalCollectionView;
@property (strong, nonatomic) UICollectionViewFlowLayout *flowLayout;

@end
