/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSSet;

@interface TSWPRevertStylesCommand : TSWPTextCommand {
    NSDictionary *_changeDetails;
    NSSet *_styleClasses;
}

@property(retain) NSDictionary * changeDetails;

+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousCharacterStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousListStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousParagraphStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;

- (id)actionString;
- (id)changeDetails;
- (void)dealloc;
- (void)doCommit;
- (void)doUndoRedo;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 styleClasses:(id)arg3;
- (int)persistenceKind;
- (void)setChangeDetails:(id)arg1;

@end