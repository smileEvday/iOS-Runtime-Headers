/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSCH3DShaderProgram, TSCH3DShaderVariableLinkage;

@interface TSCH3DShaderAssignment : NSObject <TSCH3DShaderStatement> {
    struct TSCH3DShaderVariableScopeType { 
        unsigned int mValue; 
    struct TSCH3DShaderType { 
        unsigned int mValue; 
    struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
        struct TSCH3DShaderVariableScopeType {} *__begin_; 
        struct TSCH3DShaderVariableScopeType {} *__end_; 
        struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { 
            struct TSCH3DShaderVariableScopeType {} *__first_; 
        } __end_cap_; 
    TSCH3DShaderVariableLinkage *mAssignee;
    } mAssigneeScope;
    } mDependeeScopes;
    NSArray *mDependees;
    } mLinkageType;
    TSCH3DShaderProgram *mProgram;
    NSString *mStatement;
}

@property(readonly) TSCH3DShaderVariableLinkage * assignee;
@property(readonly) struct TSCH3DShaderVariableScopeType { unsigned int x1; } assigneeScope;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSArray * dependees;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isLinked;
@property struct TSCH3DShaderType { unsigned int x1; } linkageType;
@property(readonly) NSString * string;
@property(readonly) Class superclass;

+ (id)assignmentWithAssignee:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assignee;
- (struct TSCH3DShaderVariableScopeType { unsigned int x1; })assigneeScope;
- (void)dealloc;
- (struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x1; struct TSCH3DShaderVariableScopeType {} *x2; struct __compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType> > { struct TSCH3DShaderVariableScopeType {} *x_3_1_1; } x3; }*)dependeeScopes;
- (id)dependees;
- (id)description;
- (struct TSCH3DShaderType { unsigned int x1; })dominantDependeeLinkageType;
- (id)expressionStringForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (id)forceLinkageForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (id)initWithAssigneeLinkage:(id)arg1 statement:(id)arg2 dependees:(id)arg3 program:(id)arg4;
- (BOOL)isLinked;
- (struct TSCH3DShaderType { unsigned int x1; })linkageType;
- (id)resolve;
- (id)resolveDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)setAssigneeScopeToType:(struct TSCH3DShaderVariableScopeType { unsigned int x1; })arg1;
- (void)setGeneratedForType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (void)setLinkageType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (id)string;
- (id)updateDependeesWithPreviousType:(struct TSCH3DShaderType { unsigned int x1; })arg1;
- (BOOL)updateLinkageTypeAddVaryingToAdditions:(id)arg1;
- (id)updateVaryingAssignmentForLinkage:(id)arg1;
- (id)varyingAssignmentForLinkage:(id)arg1;

@end
