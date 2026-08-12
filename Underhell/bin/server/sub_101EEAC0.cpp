void __thiscall sub_101EEAC0(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // [esp+14h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v20 = *(_DWORD *)(a2 + 8);
  else
    v20 = 0;
  v3 = this + 563;
  v4 = this[563] & 0xFFFFFFF7;
  if ( this[563] != v4 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v4;
  }
  v5 = *v3 & 0xFFFFDFFF;
  if ( *v3 != v5 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v5;
  }
  v6 = *v3 & 0xFFFFFEFF;
  if ( *v3 != v6 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v6;
  }
  v7 = *v3 & 0xFFFFFFFE;
  if ( *v3 != v7 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v7;
  }
  v8 = *v3 & 0xFFFFEFFF;
  if ( *v3 != v8 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v8;
  }
  v9 = *v3 & 0xFFFFBFFF;
  if ( *v3 != v9 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v9;
  }
  v10 = *v3 & 0xFFFF7FFF;
  if ( *v3 != v10 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[548])(this + 548, this + 563);
    *v3 = v10;
  }
  if ( !v20 )
  {
    if ( *((_BYTE *)this + 2137) )
      sub_101ECF40((int)this);
    if ( *((_BYTE *)this + 3370) )
      sub_101ED380((int)this);
    if ( *((_BYTE *)this + 3369) )
      (*(void (__thiscall **)(_DWORD *))(*this + 1616))(this);
    *((_WORD *)this + 1070) = 0;
    v14 = *v3 | 8;
    if ( *v3 != v14 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v14;
    }
    v15 = *v3 | 0x2000;
    if ( *v3 != v15 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v15;
    }
    v16 = *v3 | 0x100;
    if ( *v3 != v16 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v16;
    }
    v17 = *v3 | 1;
    if ( *v3 != v17 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v17;
    }
    v18 = *v3 | 0x1000;
    if ( *v3 != v18 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v18;
    }
    v13 = *v3 | 0x4000;
LABEL_53:
    if ( *v3 != v13 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v13;
    }
    v19 = *v3 | 0x8000;
    if ( *v3 != v19 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v19;
    }
    return;
  }
  if ( v20 != 1 )
  {
    if ( v20 != 2 )
      return;
    if ( *((_BYTE *)this + 2137) )
      sub_101ECF40((int)this);
    if ( *((_BYTE *)this + 3370) )
    {
      sub_101ED380((int)this);
      *((_BYTE *)this + 2141) = 0;
    }
    if ( *((_BYTE *)this + 3369) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 1616))(this);
      *((_BYTE *)this + 2140) = 0;
    }
    v11 = *v3 | 8;
    if ( *v3 != v11 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v11;
    }
    v12 = *v3 | 0x100;
    if ( *v3 != v12 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 15))(v3 - 15, v3);
      *v3 = v12;
    }
    v13 = *v3 | 1;
    goto LABEL_53;
  }
  if ( !*((_BYTE *)this + 2141) )
    *((_BYTE *)this + 2141) = 1;
  if ( !*((_BYTE *)this + 2140) )
    *((_BYTE *)this + 2140) = 1;
}
