void __thiscall sub_1036DD60(int this, char a2)
{
  int v3; // ebx
  int *v4; // ecx
  unsigned int v5; // edi
  int *v6; // ecx
  unsigned int v7; // ebx
  int *v8; // ecx

  if ( a2 )
  {
    sub_100EAB80((_DWORD *)this, 32);
    sub_100EA940((int *)this, 0x8000);
    v3 = *(_DWORD *)(this + 248) | 2;
    if ( *(_DWORD *)(this + 248) != v3 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 248);
      }
      *(_DWORD *)(this + 248) = v3;
    }
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    if ( *(_BYTE *)(this + 225) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 0;
    }
    *(float *)(this + 1684) = -1.0;
    sub_1002B660(this, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E8108);
    *(_BYTE *)(this + 3655) = a2;
  }
  else
  {
    v5 = *(_DWORD *)(this + 192) & 0xFFFFFFDF;
    if ( *(_DWORD *)(this + 192) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 192);
      }
      *(_DWORD *)(this + 192) = v5;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_100D8500((_DWORD *)this);
    sub_100EA9A0((int *)this, 0x8000);
    v7 = *(_DWORD *)(this + 248) & 0xFFFFFFFD;
    if ( *(_DWORD *)(this + 248) != v7 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 248);
      }
      *(_DWORD *)(this + 248) = v7;
    }
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
    if ( *(_BYTE *)(this + 225) != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 2;
    }
    *(float *)(this + 1684) = 0.5;
    *(_BYTE *)(this + 3655) = 0;
  }
}
