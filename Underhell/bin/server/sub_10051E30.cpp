void __thiscall sub_10051E30(void *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  double v6; // st7
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax

  v2 = *((_DWORD *)this + 1);
  if ( *(_DWORD *)(v2 + 2688) != -1
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2688) & 0xFFF) + 2] == *(_DWORD *)(v2 + 2688) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 2688) & 0xFFF) + 1] )
  {
    v3 = *(_DWORD *)(v2 + 2688);
    if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(v2 + 2688) & 0xFFF) + 1], v4[1] != v3 >> 12) )
      v5 = 0;
    else
      v5 = *v4;
    sub_102320D0(v5);
  }
  if ( 0.0 == *((float *)this + 50) )
    v6 = *(float *)(dword_106B31C8 + 12) + *((float *)this + 49);
  else
    v6 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *((float *)this + 49),
           *((float *)this + 50))
       + *(float *)(dword_106B31C8 + 12);
  *((float *)this + 48) = v6;
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
  v7 = sub_1007DB30(100000);
  sub_10023CB0(*((char **)this + 1), v7);
  v8 = (_DWORD *)*((_DWORD *)this + 1);
  *((float *)this + 26) = -1.0;
  *((_DWORD *)this + 28) = 0;
  *((float *)this + 29) = 3.4028235e38;
  if ( v8 && *(_DWORD *)(dword_10692124 + 48) )
    sub_10029660(v8, (int)"Follow: NoteSuccessfulFollow()\n");
  if ( !*((_BYTE *)this + 228) )
  {
    v9 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 1868))(*((_DWORD *)this + 1));
    v10 = *((_DWORD *)this + 1);
    *((float *)this + 34) = *(float *)(v9 + 28);
    (*(void (**)(void))(*(_DWORD *)v10 + 1868))();
    sub_100756F0(5.0);
  }
  *((float *)this + 35) = *(float *)(*((_DWORD *)this + 1) + 2896);
  v11 = *((_DWORD *)this + 5);
  if ( v11 != -1 )
  {
    v12 = &off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 1];
    v13 = v11 >> 12;
    if ( off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 2] == v13 )
    {
      if ( *v12 )
      {
        if ( off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 2] == v13 )
          v14 = *v12;
        else
          v14 = 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 320))(v14) )
          *(float *)(*((_DWORD *)this + 1) + 2896) = 3.4028235e38;
      }
    }
  }
}
