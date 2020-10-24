// Lean compiler output
// Module: Init.Data.List.BasicAux
// Imports: Init.Data.List.Basic Init.Util
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_getLast_x21___rarg___closed__1;
lean_object* l_List_head_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_List_tail_x21___rarg___closed__1;
lean_object* l_List_get_x3f___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f(lean_object*);
lean_object* l_List_head_x3f_match__1(lean_object*, lean_object*);
lean_object* l_List_tail_x3f(lean_object*);
lean_object* l_List_getD___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_tail_x21___rarg___closed__2;
lean_object* l_List_tail_x21___rarg___boxed(lean_object*);
lean_object* l_List_head_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_match__1(lean_object*, lean_object*);
lean_object* l_List_tailD___rarg(lean_object*, lean_object*);
lean_object* l_List_get_x21___rarg___closed__1;
lean_object* l_List_get_x21___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_tailD(lean_object*);
lean_object* l_List_headD(lean_object*);
lean_object* l_List_getLast_x21___rarg___closed__2;
lean_object* l_List_head_x21_match__1(lean_object*, lean_object*);
lean_object* l_List_get_x3f___rarg(lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
lean_object* l_List_tail_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x21___rarg___closed__2;
lean_object* l_List_head_x3f(lean_object*);
lean_object* l_List_head_x3f___rarg___boxed(lean_object*);
lean_object* l_List_getLastD(lean_object*);
lean_object* l_List_tail_x21_match__1(lean_object*, lean_object*);
lean_object* l_List_headD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_get_x21___rarg___closed__3;
lean_object* l_List_getLast(lean_object*);
lean_object* l_List_tail_x3f___rarg(lean_object*);
lean_object* l_List_head_x21___rarg___closed__1;
lean_object* l_List_get_x21___rarg___closed__4;
lean_object* l_List_getLast_x3f___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_getLast_x21_match__1(lean_object*, lean_object*);
lean_object* l_List_tail_x21(lean_object*);
lean_object* l_List_get_x21_match__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLastD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_tail_x3f_match__1(lean_object*, lean_object*);
lean_object* l_List_get_x3f(lean_object*);
lean_object* l_List_headD___rarg(lean_object*, lean_object*);
lean_object* l_List_getD___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_headD_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x21(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg___closed__2;
lean_object* l_List_tailD_match__1(lean_object*, lean_object*);
lean_object* l_List_tail_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x21(lean_object*);
lean_object* l_List_tail_x3f___rarg___boxed(lean_object*);
lean_object* l_List_get_x3f_match__1(lean_object*, lean_object*);
lean_object* l_List_getLastD_match__1(lean_object*, lean_object*);
lean_object* l_List_headD_match__1(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f_match__1(lean_object*, lean_object*);
lean_object* l_List_get_x21___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___rarg___closed__3;
lean_object* l_List_tailD___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_getLast_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x3f___rarg(lean_object*);
lean_object* l_List_getLast_x21___rarg(lean_object*, lean_object*);
lean_object* l_List_head_x21(lean_object*);
lean_object* l_List_getLast_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD(lean_object*);
lean_object* l_List_tailD_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_get_x21_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLastD_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast___rarg(lean_object*, lean_object*);
lean_object* l_List_getLastD___rarg(lean_object*, lean_object*);
lean_object* l_List_get_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_apply_2(x_5, x_1, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
lean_dec(x_1);
x_13 = lean_apply_3(x_4, x_12, x_9, x_10);
return x_13;
}
}
else
{
lean_dec(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = lean_apply_2(x_5, x_6, x_2);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_apply_2(x_3, x_15, x_16);
return x_17;
}
}
}
}
lean_object* l_List_get_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_get_x21_match__1___rarg), 5, 0);
return x_3;
}
}
static lean_object* _init_l_List_get_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Data.List.BasicAux");
return x_1;
}
}
static lean_object* _init_l_List_get_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.get!");
return x_1;
}
}
static lean_object* _init_l_List_get_x21___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid index");
return x_1;
}
}
static lean_object* _init_l_List_get_x21___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_get_x21___rarg___closed__1;
x_2 = l_List_get_x21___rarg___closed__2;
x_3 = lean_unsigned_to_nat(22u);
x_4 = lean_unsigned_to_nat(18u);
x_5 = l_List_get_x21___rarg___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_get_x21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = l_List_get_x21___rarg___closed__4;
x_7 = lean_panic_fn(x_1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_2);
x_2 = x_10;
x_3 = x_8;
goto _start;
}
}
else
{
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_List_get_x21___rarg___closed__4;
x_13 = lean_panic_fn(x_1, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
return x_14;
}
}
}
}
lean_object* l_List_get_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x21___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_get_x21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x21___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_List_get_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_apply_2(x_5, x_1, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
lean_dec(x_1);
x_13 = lean_apply_3(x_4, x_12, x_9, x_10);
return x_13;
}
}
else
{
lean_dec(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = lean_apply_2(x_5, x_6, x_2);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = lean_apply_2(x_3, x_15, x_16);
return x_17;
}
}
}
}
lean_object* l_List_get_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_get_x3f_match__1___rarg), 5, 0);
return x_3;
}
}
lean_object* l_List_get_x3f___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_1, x_7);
lean_dec(x_1);
x_1 = x_8;
x_2 = x_6;
goto _start;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_List_get_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_get_x3f___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_get_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_get_x3f___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_getD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_get_x3f___rarg(x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
return x_5;
}
}
}
lean_object* l_List_getD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getD___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_getD___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_getD___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_head_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_head_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_head_x21_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_List_head_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.head!");
return x_1;
}
}
static lean_object* _init_l_List_head_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("empty list");
return x_1;
}
}
static lean_object* _init_l_List_head_x21___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_get_x21___rarg___closed__1;
x_2 = l_List_head_x21___rarg___closed__1;
x_3 = lean_unsigned_to_nat(33u);
x_4 = lean_unsigned_to_nat(12u);
x_5 = l_List_head_x21___rarg___closed__2;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_head_x21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_head_x21___rarg___closed__3;
x_4 = lean_panic_fn(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_List_head_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_head_x21___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_head_x21___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_head_x21___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_head_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_head_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_head_x3f_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_head_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_List_head_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_head_x3f___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_head_x3f___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x3f___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_headD_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_List_headD_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_headD_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_List_headD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
lean_object* l_List_headD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_headD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_headD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_headD___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_tail_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_tail_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_tail_x21_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_List_tail_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.tail!");
return x_1;
}
}
static lean_object* _init_l_List_tail_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_get_x21___rarg___closed__1;
x_2 = l_List_tail_x21___rarg___closed__1;
x_3 = lean_unsigned_to_nat(45u);
x_4 = lean_unsigned_to_nat(13u);
x_5 = l_List_head_x21___rarg___closed__2;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_tail_x21___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(0);
x_3 = l_List_tail_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_List_tail_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tail_x21___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_tail_x21___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_tail_x21___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_tail_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_tail_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_tail_x3f_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_tail_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
}
lean_object* l_List_tail_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tail_x3f___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_tail_x3f___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_tail_x3f___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_tailD_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_List_tailD_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_tailD_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_List_tailD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
}
lean_object* l_List_tailD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_tailD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_tailD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_tailD___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_getLast_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_8, lean_box(0));
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_4(x_5, x_10, x_11, x_12, lean_box(0));
return x_13;
}
}
}
}
lean_object* l_List_getLast_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_getLast_match__1___rarg), 5, 0);
return x_3;
}
}
lean_object* l_List_getLast___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
x_1 = x_3;
x_2 = lean_box(0);
goto _start;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_1 = x_9;
x_2 = lean_box(0);
goto _start;
}
}
}
}
lean_object* l_List_getLast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_getLast_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_getLast_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_getLast_x21_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_List_getLast_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("List.getLast!");
return x_1;
}
}
static lean_object* _init_l_List_getLast_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_List_get_x21___rarg___closed__1;
x_2 = l_List_getLast_x21___rarg___closed__1;
x_3 = lean_unsigned_to_nat(62u);
x_4 = lean_unsigned_to_nat(13u);
x_5 = l_List_head_x21___rarg___closed__2;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_List_getLast_x21___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_getLast_x21___rarg___closed__2;
x_4 = lean_panic_fn(x_1, x_3);
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l_List_getLast___rarg(x_2, lean_box(0));
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_List_getLast___rarg(x_9, lean_box(0));
return x_10;
}
}
}
}
lean_object* l_List_getLast_x21(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast_x21___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_getLast_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_getLast_x3f_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_getLast_x3f_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_getLast_x3f___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_getLast___rarg(x_1, lean_box(0));
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_List_getLast___rarg(x_8, lean_box(0));
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
lean_object* l_List_getLast_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLast_x3f___rarg), 1, 0);
return x_2;
}
}
lean_object* l_List_getLastD_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_List_getLastD_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_getLastD_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_List_getLastD___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l_List_getLast___rarg(x_1, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_List_getLast___rarg(x_7, lean_box(0));
return x_8;
}
}
}
}
lean_object* l_List_getLastD(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_getLastD___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_getLastD___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_getLastD___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init_Data_List_Basic(lean_object*);
lean_object* initialize_Init_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_List_BasicAux(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_List_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_List_get_x21___rarg___closed__1 = _init_l_List_get_x21___rarg___closed__1();
lean_mark_persistent(l_List_get_x21___rarg___closed__1);
l_List_get_x21___rarg___closed__2 = _init_l_List_get_x21___rarg___closed__2();
lean_mark_persistent(l_List_get_x21___rarg___closed__2);
l_List_get_x21___rarg___closed__3 = _init_l_List_get_x21___rarg___closed__3();
lean_mark_persistent(l_List_get_x21___rarg___closed__3);
l_List_get_x21___rarg___closed__4 = _init_l_List_get_x21___rarg___closed__4();
lean_mark_persistent(l_List_get_x21___rarg___closed__4);
l_List_head_x21___rarg___closed__1 = _init_l_List_head_x21___rarg___closed__1();
lean_mark_persistent(l_List_head_x21___rarg___closed__1);
l_List_head_x21___rarg___closed__2 = _init_l_List_head_x21___rarg___closed__2();
lean_mark_persistent(l_List_head_x21___rarg___closed__2);
l_List_head_x21___rarg___closed__3 = _init_l_List_head_x21___rarg___closed__3();
lean_mark_persistent(l_List_head_x21___rarg___closed__3);
l_List_tail_x21___rarg___closed__1 = _init_l_List_tail_x21___rarg___closed__1();
lean_mark_persistent(l_List_tail_x21___rarg___closed__1);
l_List_tail_x21___rarg___closed__2 = _init_l_List_tail_x21___rarg___closed__2();
lean_mark_persistent(l_List_tail_x21___rarg___closed__2);
l_List_getLast_x21___rarg___closed__1 = _init_l_List_getLast_x21___rarg___closed__1();
lean_mark_persistent(l_List_getLast_x21___rarg___closed__1);
l_List_getLast_x21___rarg___closed__2 = _init_l_List_getLast_x21___rarg___closed__2();
lean_mark_persistent(l_List_getLast_x21___rarg___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
