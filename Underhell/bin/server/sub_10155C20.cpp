void __thiscall sub_10155C20(float *this, int a2)
{
  int v3; // eax

  if ( 0.0 != this[1] && *(float *)(dword_106B31C8 + 12) > (double)this[1] )
  {
    v3 = sub_1025FB50(1);
    if ( v3
      && (0.0 == *(float *)(v3 + 3472) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(v3 + 3472))
      && *(_BYTE *)(v3 + 4518) != 1
      && (double)*(int *)(v3 + 220) >= this[2] )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
        dword_106B31D0,
        "autosavedangerousissafe\n");
    }
    this[1] = 0.0;
    this[2] = 0.0;
  }
}
