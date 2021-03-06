//
//  AddSharingCell.h
//  Harmony
//
//  Created by hongyu on 13-2-27.
//  Copyright (c) 2013年 久久相悦. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddSharingCellDelegate <NSObject>

- (void) toggleSharing: (int)row;

@end

@interface AddSharingCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *pictureView;

@property (weak, nonatomic) IBOutlet UILabel *title;


@property (weak, nonatomic) IBOutlet UIButton *shareButton;

@property (weak, nonatomic) IBOutlet UIImageView *background;
@property (weak, nonatomic) id<AddSharingCellDelegate> cellDelegate;

@property (assign, nonatomic) BOOL isShared;
@property (assign, nonatomic) int row;
- (IBAction)toggleSharing:(id)sender;

@end
