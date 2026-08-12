void __thiscall sub_10039F40(int *this, int a2)
{
  const char *v4; // ebx
  const char *v5; // eax
  const char *v6; // [esp-8h] [ebp-10h]
  int v7; // [esp+10h] [ebp+8h]

  if ( a2 != 2 )
  {
    if ( *(_DWORD *)(dword_10695FE4 + 48) && (this[59] & 0x1000) != 0 )
    {
      v7 = this[593];
      v4 = (const char *)this[23];
      if ( !v4 )
        v4 = String;
      v6 = sub_10008F90(a2);
      v5 = sub_10008F90(v7);
      DevMsg("SetIdealActivity : %s: %s -> %s\n", v4, v5, v6);
    }
    if ( a2 )
    {
      this[595] = a2;
      if ( a2 != 171 )
      {
        if ( sub_10001430(this) )
          sub_10039D10(this, this[595], this + 596, this + 597, this + 598);
      }
    }
    else
    {
      (*(void (__thiscall **)(int *, _DWORD))(*this + 1416))(this, 0);
    }
  }
}
