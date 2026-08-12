void __thiscall sub_10144780(int this)
{
  _DWORD *v2; // edi
  int v3; // edi
  int v4; // ecx
  float *v5; // esi

  if ( (*(_BYTE *)(this + 872) & 1) != 0 )
  {
    v2 = (_DWORD *)(this + 816);
    if ( *(_DWORD *)(this + 816) != *(_DWORD *)(this + 824) )
    {
      (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 816);
      *v2 = *(_DWORD *)(this + 824);
    }
    sub_10144140(this);
  }
  if ( (*(_BYTE *)(this + 872) & 2) != 0 )
  {
    if ( *(_DWORD *)(this + 820) != *(_DWORD *)(this + 828) )
    {
      (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 820);
      *(_DWORD *)(this + 820) = *(_DWORD *)(this + 828);
    }
    sub_10144140(this);
  }
  if ( (*(_BYTE *)(this + 872) & 4) != 0 )
  {
    if ( *(_DWORD *)(this + 832) != *(_DWORD *)(this + 848) )
    {
      (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 832);
      *(float *)(this + 832) = *(float *)(this + 848);
    }
    sub_10144140(this);
  }
  if ( (*(_BYTE *)(this + 872) & 8) != 0 )
  {
    if ( *(_DWORD *)(this + 836) != *(_DWORD *)(this + 852) )
    {
      (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 836);
      *(float *)(this + 836) = *(float *)(this + 852);
    }
    sub_10144140(this);
  }
  *(_DWORD *)(this + 872) = 0;
  v3 = dword_106B31C8;
  v4 = *(_DWORD *)(this + 856);
  v5 = (float *)(this + 856);
  if ( v4 != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    (**((void (__thiscall ***)(int, float *))v5 - 14))((int)(v5 - 14), v5);
    *v5 = *(float *)(v3 + 12);
  }
}
