bool __thiscall sub_1009ACB0(int this)
{
  int v3; // edi

  if ( *(_BYTE *)(this + 1320) )
  {
    *(_BYTE *)(this + 1320) = 0;
    return 1;
  }
  else if ( *(int *)(this + 1336) > 0 )
  {
    v3 = *(_DWORD *)(this + 1324);
    *(_DWORD *)(v3 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                            dword_106B31D0,
                            *(_DWORD *)(v3 + 8),
                            this + 116,
                            1204);
    ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    return *(_DWORD *)(*(_DWORD *)(this + 1324) + 8) != 0;
  }
  else
  {
    return 0;
  }
}
