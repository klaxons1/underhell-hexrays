char __thiscall sub_101A2FC0(int this, int a2)
{
  _DWORD *v3; // eax
  char **v4; // ecx
  char *v5; // eax
  _DWORD *v6; // edi
  char v7; // cl
  int v8; // eax

  LOBYTE(v3) = sub_1007E040(*(_DWORD **)(this + 2588));
  if ( !(_BYTE)v3 )
  {
    LOBYTE(v3) = sub_10023D10((_DWORD *)this, 10);
    if ( !(_BYTE)v3 )
    {
      LOBYTE(v3) = sub_10023D10((_DWORD *)this, 25);
      if ( !(_BYTE)v3 )
      {
        v4 = (char **)(a2 + 8);
        if ( *(_DWORD *)(a2 + 24) == 2 )
        {
          v5 = *v4;
          if ( !*v4 )
            v5 = (char *)String;
        }
        else
        {
          v5 = (char *)sub_1010D460((int)v4);
        }
        v3 = sub_1012C5B0(0, v5, this, 0, 0);
        v6 = v3;
        if ( v3 )
        {
          if ( *(int *)(this + 2352) > 0 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1412))(this, 1);
          v7 = *(_BYTE *)(this + 306);
          *(float *)(this + 2348) = 0.0;
          *(_DWORD *)(this + 2340) = 0;
          v8 = dword_106B9108;
          if ( v7 == 4 || v7 == 5 )
            v8 = 26;
          (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)this + 1860))(this, 2, v6, v8);
          LOBYTE(v3) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1856))(this, 0);
        }
      }
    }
  }
  return (char)v3;
}
