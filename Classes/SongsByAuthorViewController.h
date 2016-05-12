//
//  SongsByAuthorViewController.h
//  ModPlayer
//
//  Created by Kai Teuber on 03.01.10.
//  Copyright 2010 Diplom-Informatiker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListViewController.h"


@interface SongsByAuthorViewController : ListViewController {

	NSInteger pkAuthor;

}

@property (nonatomic) NSInteger pkAuthor;


@end