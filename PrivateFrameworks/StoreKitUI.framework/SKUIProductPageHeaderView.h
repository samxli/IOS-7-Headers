/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "SKUIItemOfferButtonDelegate.h"

@class NSString, SKUIClientContext, SKUIColorScheme, SKUIItemOffer, SKUIItemOfferButton, SKUIItemState, SKUIProductPageHeaderLabel, UIButton, UIControl, UIImage, UIImageView, UILabel;

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate>
{
    UIButton *_artistButton;
    SKUIClientContext *_clientContext;
    NSString *_contentRatingName;
    SKUIColorScheme *_colorScheme;
    UILabel *_facebookFriendsLabel;
    UIImageView *_facebookLogoImageView;
    float _headerImageHeight;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    int _numberOfUserRatings;
    BOOL _restricted;
    UIButton *_shareButton;
    SKUIProductPageHeaderLabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property(readonly, nonatomic) UIControl *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property(nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(copy, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) UIControl *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(retain, nonatomic) SKUIItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(nonatomic) float headerImageHeight; // @synthesize headerImageHeight=_headerImageHeight;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UIControl *artistButton; // @synthesize artistButton=_artistButton;
- (void).cxx_destruct;
- (void)_reloadItemOfferButton:(BOOL)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSString *inAppPurchasesString;
@property(retain, nonatomic) UIImage *iconImage;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *facebookFriendsString;
@property(copy, nonatomic) NSString *contentRatingName; // @synthesize contentRatingName=_contentRatingName;
@property(copy, nonatomic) NSString *artistName;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end
