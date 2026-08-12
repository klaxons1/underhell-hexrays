void __thiscall sub_1016BBE0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  _DWORD **v3; // ecx
  bool v4; // zf
  int v5; // eax
  void *v7; // ecx
  int v8; // ecx

  v7 = (void *)this[7];
  if ( v7 )
    sub_1016B710(v7);
  v8 = this[8];
  if ( v8 )
  {
    v1 = (_DWORD *)this[8];
    if ( *(_DWORD *)(v8 + 24) )
    {
      v2 = 0;
      if ( *(int *)(v8 + 12) > 0 )
      {
        do
        {
          v3 = (_DWORD **)(*v1 + 4 * v2);
          if ( *((_BYTE *)*v3 + 8) && *(float *)(dword_106B31C8 + 12) - *((float *)*v3 + 1) > -0.001 )
          {
            v4 = (unsigned __int8)sub_1016BC40(**v3) == 0;
            v5 = *(_DWORD *)(*v1 + 4 * v2);
            if ( !v4 )
            {
              sub_1016BD00(*(_DWORD *)v5, 0, 0);
              sub_1016B5B0(v1, **(_DWORD **)(*v1 + 4 * v2));
              return;
            }
            *(_BYTE *)(v5 + 8) = 1;
            *(float *)(v5 + 4) = *(float *)(dword_106B31C8 + 12) + *(float *)(v5 + 12);
          }
          ++v2;
        }
        while ( v2 < v1[3] );
      }
    }
  }
}
