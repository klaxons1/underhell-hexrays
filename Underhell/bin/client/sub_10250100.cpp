int __thiscall sub_10250100(int this, int (__thiscall ***a2)(_DWORD), char *Source, int a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  char *v9; // eax
  int *v10; // eax
  int *v11; // edi
  int *v12; // eax
  int *v13; // edi
  int *v14; // eax
  int *v15; // edi
  int *v16; // eax
  int *v17; // edi
  int *v18; // eax
  int *v19; // edi
  int *v20; // eax
  int *v21; // edi
  int *v22; // eax
  int *v23; // edi
  int *v24; // eax
  int *v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  _DWORD *v41; // eax
  void (__thiscall **v42)(_DWORD, int); // edi
  int v43; // eax
  _DWORD *v44; // edi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax

  sub_1024C5C0((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::Frame::`vftable';
  if ( !byte_1047ED88 )
  {
    byte_1047ED88 = 1;
    v5 = sub_10242540("Frame");
    v5[7] = (unsigned int)sub_10180F90;
    v5[6] = (unsigned int)sub_10242540("EditablePanel");
  }
  if ( !byte_1047ED89 )
  {
    byte_1047ED89 = 1;
    v6 = sub_102484C0((int)"Frame");
    *(_DWORD *)(v6 + 24) = sub_10180F90;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"EditablePanel");
  }
  if ( !byte_1047ED8A )
  {
    byte_1047ED8A = 1;
    v7 = sub_10242580("Frame");
    v7[17] = (unsigned int)sub_10180F90;
    v7[6] = (unsigned int)sub_10242580("EditablePanel");
  }
  if ( !byte_1047ED8E )
  {
    byte_1047ED8E = 1;
    sub_1024FBB0((int)"Close", (int)sub_10252C60, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047ED8F )
  {
    byte_1047ED8F = 1;
    sub_1024FBB0((int)"CloseModal", (int)sub_1024F670, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047ED90 )
  {
    byte_1047ED90 = 1;
    sub_1024FBB0((int)"Minimize", (int)sub_1024F690, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047ED91 )
  {
    byte_1047ED91 = 1;
    sub_1024FBB0((int)"CloseFrameButtonPressed", (int)sub_10261B80, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  sub_1024FC30((void *)(this + 259));
  if ( !byte_1047ED93 )
  {
    byte_1047ED93 = 1;
    sub_1024FBB0((int)"FlashWindow", (int)sub_1024F6B0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  if ( !byte_1047ED94 )
  {
    byte_1047ED94 = 1;
    sub_1024FBB0((int)"DialogVariables", (int)sub_1024F680, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  *(_DWORD *)(this + 262) = 0;
  *(_DWORD *)(this + 266) = 0;
  *(_DWORD *)(this + 270) = 0;
  *(_DWORD *)(this + 274) = 0;
  *(_DWORD *)(this + 278) = 0;
  *(_DWORD *)(this + 282) = 0;
  sub_1024FC80();
  sub_1024FCE0();
  sub_10236310((int (__thiscall ***)(void *, int))this, 0);
  sub_10237000((int (__thiscall ***)(void *, _DWORD, int, int, int, int))this, a4, 0);
  *(float *)(this + 364) = 0.0;
  *(float *)(this + 368) = 0.0;
  *(_DWORD *)(this + 372) = 5;
  *(_DWORD *)(this + 376) = 5;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_BYTE *)(this + 353) = 1;
  *(_BYTE *)(this + 352) = 1;
  *(_BYTE *)(this + 354) = 0;
  *(_BYTE *)(this + 355) = 0;
  *(_BYTE *)(this + 357) = 1;
  *(_BYTE *)(this + 358) = 0;
  *(_BYTE *)(this + 359) = 0;
  *(_BYTE *)(this + 360) = 0;
  *(_BYTE *)(this + 380) = 0;
  *(_DWORD *)(this + 384) = 28;
  *(_BYTE *)(this + 392) = 0;
  *(_BYTE *)(this + 393) = 0;
  *(_BYTE *)(this + 400) = 0;
  *(_BYTE *)(this + 401) = 0;
  *(_DWORD *)(this + 408) = 0;
  sub_1024E170((_DWORD *)this, "#Frame_Untitled", a2 == 0);
  DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination((Concurrency::details::UMSThreadVirtualProcessor *)this);
  sub_10241450((_DWORD *)this, (int)DefaultDestination);
  sub_10237040((int (__thiscall ***)(void *, int, int))this, 128, 66);
  *(_DWORD *)(this + 388) = 0;
  v9 = sub_1024BC60((char *)this);
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v9 + 36))(v9, 1);
  v10 = (int *)sub_100DDA40(252);
  v11 = v10;
  if ( v10 )
  {
    sub_10243490(v10, (int (__thiscall ***)(_DWORD))this, "frame_topGrip");
    *v11 = (int)`anonymous namespace'::GripPanel::`vftable';
    v11[51] = this;
    *((_BYTE *)v11 + 216) = 0;
    v11[52] = 0;
    v11[53] = -1;
    sub_10239D30(v11, 0);
    sub_10239D10(v11, 0);
    sub_10239CF0(v11, 0);
    v11[61] = 10;
    sub_10238E80(v11, 1);
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(this + 292) = v11;
  v12 = (int *)sub_100DDA40(252);
  v13 = v12;
  if ( v12 )
  {
    sub_10243490(v12, (int (__thiscall ***)(_DWORD))this, "frame_bottomGrip");
    *v13 = (int)`anonymous namespace'::GripPanel::`vftable';
    v13[51] = this;
    *((_BYTE *)v13 + 216) = 0;
    v13[52] = 0;
    v13[53] = 1;
    sub_10239D30(v13, 0);
    sub_10239D10(v13, 0);
    sub_10239CF0(v13, 0);
    v13[61] = 10;
    sub_10238E80(v13, 1);
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(this + 296) = v13;
  v14 = (int *)sub_100DDA40(252);
  v15 = v14;
  if ( v14 )
  {
    sub_10243490(v14, (int (__thiscall ***)(_DWORD))this, "frame_leftGrip");
    *v15 = (int)`anonymous namespace'::GripPanel::`vftable';
    v15[51] = this;
    *((_BYTE *)v15 + 216) = 0;
    v15[52] = -1;
    v15[53] = 0;
    sub_10239D30(v15, 0);
    sub_10239D10(v15, 0);
    sub_10239CF0(v15, 0);
    v15[61] = 10;
    sub_10238E80(v15, 1);
  }
  else
  {
    v15 = 0;
  }
  *(_DWORD *)(this + 300) = v15;
  v16 = (int *)sub_100DDA40(252);
  v17 = v16;
  if ( v16 )
  {
    sub_10243490(v16, (int (__thiscall ***)(_DWORD))this, "frame_rightGrip");
    *v17 = (int)`anonymous namespace'::GripPanel::`vftable';
    v17[51] = this;
    *((_BYTE *)v17 + 216) = 0;
    v17[52] = 1;
    v17[53] = 0;
    sub_10239D30(v17, 0);
    sub_10239D10(v17, 0);
    sub_10239CF0(v17, 0);
    v17[61] = 10;
    sub_10238E80(v17, 1);
  }
  else
  {
    v17 = 0;
  }
  *(_DWORD *)(this + 304) = v17;
  v18 = (int *)sub_100DDA40(252);
  v19 = v18;
  if ( v18 )
  {
    sub_10243490(v18, (int (__thiscall ***)(_DWORD))this, "frame_tlGrip");
    *v19 = (int)`anonymous namespace'::GripPanel::`vftable';
    v19[51] = this;
    *((_BYTE *)v19 + 216) = 0;
    v19[52] = -1;
    v19[53] = -1;
    sub_10239D30(v19, 0);
    sub_10239D10(v19, 0);
    sub_10239CF0(v19, 0);
    v19[61] = 10;
    sub_10238E80(v19, 1);
  }
  else
  {
    v19 = 0;
  }
  *(_DWORD *)(this + 308) = v19;
  v20 = (int *)sub_100DDA40(252);
  v21 = v20;
  if ( v20 )
  {
    sub_10243490(v20, (int (__thiscall ***)(_DWORD))this, "frame_trGrip");
    *v21 = (int)`anonymous namespace'::GripPanel::`vftable';
    v21[51] = this;
    *((_BYTE *)v21 + 216) = 0;
    v21[52] = 1;
    v21[53] = -1;
    sub_10239D30(v21, 0);
    sub_10239D10(v21, 0);
    sub_10239CF0(v21, 0);
    v21[61] = 10;
    sub_10238E80(v21, 1);
  }
  else
  {
    v21 = 0;
  }
  *(_DWORD *)(this + 312) = v21;
  v22 = (int *)sub_100DDA40(252);
  v23 = v22;
  if ( v22 )
  {
    sub_10243490(v22, (int (__thiscall ***)(_DWORD))this, "frame_blGrip");
    *v23 = (int)`anonymous namespace'::GripPanel::`vftable';
    v23[51] = this;
    *((_BYTE *)v23 + 216) = 0;
    v23[52] = -1;
    v23[53] = 1;
    sub_10239D30(v23, 0);
    sub_10239D10(v23, 0);
    sub_10239CF0(v23, 0);
    v23[61] = 10;
    sub_10238E80(v23, 1);
  }
  else
  {
    v23 = 0;
  }
  *(_DWORD *)(this + 316) = v23;
  v24 = (int *)sub_100DDA40(252);
  v25 = v24;
  if ( v24 )
  {
    sub_10243490(v24, (int (__thiscall ***)(_DWORD))this, "frame_brGrip");
    *v25 = (int)`anonymous namespace'::GripPanel::`vftable';
    v25[51] = this;
    *((_BYTE *)v25 + 216) = 0;
    v25[52] = 1;
    v25[53] = 1;
    sub_10239D30(v25, 0);
    sub_10239D10(v25, 0);
    sub_10239CF0(v25, 0);
    v25[61] = 10;
    sub_10239D30(v25, 1);
    sub_10239D10(v25, 1);
    sub_10238E80(v25, 1);
  }
  else
  {
    v25 = 0;
  }
  *(_DWORD *)(this + 320) = v25;
  v26 = sub_100DDA40(252);
  if ( v26 )
    v27 = sub_1024CDD0(v26, (int (__thiscall ***)(_DWORD))this, "frame_caption");
  else
    v27 = 0;
  *(_DWORD *)(this + 324) = v27;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 232))(v27, 2);
  v28 = sub_100DDA40(396);
  if ( v28 )
    v29 = sub_1024D080(v28, this, "frame_minimize", (int)"0");
  else
    v29 = 0;
  *(_DWORD *)(this + 328) = v29;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 172))(v29, this);
  v30 = (_DWORD *)sub_10229D00(32);
  if ( v30 )
    v31 = sub_10229D20(v30, (int)"Minimize");
  else
    v31 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 328) + 1028))(*(_DWORD *)(this + 328), v31);
  v32 = sub_100DDA40(396);
  if ( v32 )
    v33 = sub_1024D080(v32, this, "frame_maximize", (int)"1");
  else
    v33 = 0;
  *(_DWORD *)(this + 332) = v33;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 124))(v33, 0);
  LOWORD(Source) = 111;
  v34 = sub_100DDA40(396);
  if ( v34 )
    v35 = sub_1024D080(v34, this, "frame_mintosystray", (int)&Source);
  else
    v35 = 0;
  *(_DWORD *)(this + 336) = v35;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v35 + 1032))(v35, "MinimizeToSysTray");
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 336) + 124))(*(_DWORD *)(this + 336), 0);
  v36 = sub_100DDA40(396);
  if ( v36 )
    v37 = sub_1024D080(v36, this, "frame_close", (int)"r");
  else
    v37 = 0;
  *(_DWORD *)(this + 340) = v37;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v37 + 172))(v37, this);
  v38 = (_DWORD *)sub_10229D00(32);
  if ( v38 )
    v39 = sub_10229D20(v38, (int)"CloseFrameButtonPressed");
  else
    v39 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 340) + 1028))(*(_DWORD *)(this + 340), v39);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 5) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 328) + 124))(*(_DWORD *)(this + 328), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 332) + 124))(*(_DWORD *)(this + 332), 0);
  }
  if ( a2 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 328) + 124))(*(_DWORD *)(this + 328), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 332) + 124))(*(_DWORD *)(this + 332), 0);
  }
  v40 = sub_100DDA40(452);
  if ( v40 )
    v41 = (_DWORD *)sub_1024FD40(v40, this, "frame_menu");
  else
    v41 = 0;
  *(_DWORD *)(this + 344) = v41;
  v42 = (void (__thiscall **)(_DWORD, int))(*v41 + 1064);
  v43 = sub_1024ED10(this);
  (*v42)(*(_DWORD *)(this + 344), v43);
  sub_1024D6A0((_DWORD **)this);
  v44 = (_DWORD *)(this + 104);
  v45 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v45 + *v44) = "infocus_bgcolor_override";
  *(_DWORD *)(v45 + *v44 + 4) = this + 278;
  *(_BYTE *)(v45 + *v44 + 12) = 0;
  v46 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v46 + *v44) = "outoffocus_bgcolor_override";
  *(_DWORD *)(v46 + *v44 + 4) = this + 282;
  *(_BYTE *)(v46 + *v44 + 12) = 0;
  v47 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v47 + *v44) = "titlebarbgcolor_override";
  *(_DWORD *)(v47 + *v44 + 4) = this + 262;
  *(_BYTE *)(v47 + *v44 + 12) = 0;
  v48 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v48 + *v44) = "titlebardisabledbgcolor_override";
  *(_DWORD *)(v48 + *v44 + 4) = this + 266;
  *(_BYTE *)(v48 + *v44 + 12) = 0;
  v49 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v49 + *v44) = "titlebarfgcolor_override";
  *(_DWORD *)(v49 + *v44 + 4) = this + 270;
  *(_BYTE *)(v49 + *v44 + 12) = 0;
  v50 = 16 * sub_1023CE50((int *)(this + 104), *(_DWORD *)(this + 116));
  *(_DWORD *)(v50 + *v44) = "titlebardisabledfgcolor_override";
  *(_DWORD *)(v50 + *v44 + 4) = this + 274;
  *(_BYTE *)(v50 + *v44 + 12) = 0;
  return this;
}
