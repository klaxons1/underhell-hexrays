void *__thiscall sub_10131BB0(void *this, int a2, char *Source, const char *a4, char *a5, char *a6, char *a7)
{
  int v8; // edi
  int v9; // edi
  int v10; // edi
  char *v11; // eax
  char v12; // cl
  char *v13; // eax
  char v14; // cl
  char *v15; // eax
  char v16; // cl

  sub_10249210(a2, Source);
  *(_DWORD *)this = &vgui::ImageButton::`vftable';
  if ( !byte_104395F8 )
  {
    byte_104395F8 = 1;
    v8 = sub_10242540("ImageButton");
    *(_DWORD *)(v8 + 28) = sub_10131B50;
    *(_DWORD *)(v8 + 24) = sub_10242540("vgui::ImagePanel");
  }
  if ( !byte_104395F9 )
  {
    byte_104395F9 = 1;
    v9 = sub_102484C0("ImageButton");
    *(_DWORD *)(v9 + 24) = sub_10131B50;
    *(_DWORD *)(v9 + 20) = sub_102484C0("vgui::ImagePanel");
  }
  if ( !byte_104395FA )
  {
    byte_104395FA = 1;
    v10 = sub_10242580("ImageButton");
    *(_DWORD *)(v10 + 68) = sub_10131B50;
    *(_DWORD *)(v10 + 24) = sub_10242580("vgui::ImagePanel");
  }
  *((_DWORD *)this + 95) = a2;
  sub_10236510(a2);
  v11 = a7;
  if ( a7 )
  {
    do
    {
      v12 = *v11;
      v11[(_BYTE *)this + 239 - a7] = *v11;
      ++v11;
    }
    while ( v12 );
    *((_BYTE *)this + 384) = 1;
  }
  else
  {
    *((_BYTE *)this + 384) = 0;
  }
  strcpy((char *)this + 284, a4);
  *((_DWORD *)this + 68) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
                             dword_1047CA7C,
                             (int)this + 284,
                             0);
  v13 = a5;
  if ( a5 )
  {
    do
    {
      v14 = *v13;
      v13[(_BYTE *)this + 316 - a5] = *v13;
      ++v13;
    }
    while ( v14 );
    *((_DWORD *)this + 69) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
                               dword_1047CA7C,
                               (int)this + 316,
                               0);
    *((_BYTE *)this + 385) = 1;
  }
  else
  {
    *((_BYTE *)this + 385) = 0;
  }
  v15 = a6;
  if ( a6 )
  {
    do
    {
      v16 = *v15;
      v15[(_BYTE *)this + 348 - a6] = *v15;
      ++v15;
    }
    while ( v16 );
    *((_DWORD *)this + 70) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
                               dword_1047CA7C,
                               (int)this + 348,
                               0);
    *((_BYTE *)this + 386) = 1;
  }
  else
  {
    *((_BYTE *)this + 386) = 0;
  }
  (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 772))(this, *((_DWORD *)this + 68));
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
  return this;
}
