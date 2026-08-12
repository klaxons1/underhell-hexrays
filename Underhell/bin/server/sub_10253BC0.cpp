void __thiscall sub_10253BC0(_DWORD *this, int a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // ebx
  int v9; // ecx

  HIDWORD(v2) = this;
  v3 = (_DWORD *)this[242];
  if ( v3 )
  {
    v4 = *(_DWORD **)(HIDWORD(v2) + 972);
    if ( v4 )
    {
      if ( *(_DWORD *)(HIDWORD(v2) + 996) )
      {
        v5 = sub_101ACC90(v4);
        v6 = *(_DWORD **)(HIDWORD(v2) + 968);
      }
      else
      {
        v5 = sub_101ACC90(v3);
        v6 = *(_DWORD **)(HIDWORD(v2) + 972);
      }
      LODWORD(v2) = v5;
      v8 = sub_101ACC90(v6);
      if ( (_DWORD)v2 )
      {
        sub_100352C0(v2, v7, 1);
        if ( *(_DWORD *)(HIDWORD(v2) + 992) == 2 )
        {
          v9 = *(_DWORD *)(HIDWORD(v2) + 976);
          if ( v9 )
          {
            if ( 0.0 == *(float *)(v9 + 108) )
            {
              sub_10253AA0(v9, v2, *(float *)(v2 + 108), 0.0);
              (*(void (__stdcall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(HIDWORD(v2) + 976) + 372))(
                HIDWORD(v2),
                HIDWORD(v2),
                2,
                0.0);
            }
          }
        }
      }
      if ( v8 )
        sub_10035270(v8, v7, 1);
    }
  }
}
