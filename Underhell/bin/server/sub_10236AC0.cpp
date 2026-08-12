char *__thiscall sub_10236AC0(int this)
{
  char *result; // eax
  char **v3; // ecx
  const char *v4; // eax
  _BYTE *v5; // esi
  char v6; // bl
  char v7; // bl
  char v8; // bl
  char v9; // bl
  bool v10; // zf
  int v11; // [esp+10h] [ebp-8h]

  result = sub_100E38F0((float *)this);
  if ( *(_BYTE *)(this + 892) )
  {
    (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 828);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10422220(this + 704, this + 828);
    result = (char *)(**(int (__thiscall ***)(int, int))(this + 824))(this + 824, this + 828);
    *(float *)(this + 828) = *(float *)(this + 828) * -1.0;
    *(float *)(this + 832) = *(float *)(this + 832) * -1.0;
    *(float *)(this + 836) = -1.0 * *(float *)(this + 836);
  }
  if ( *(_BYTE *)(this + 889) )
  {
    v11 = 0;
    if ( off_1064ACE0[0] )
    {
      v3 = off_1064ACE0;
      do
      {
        v4 = *(const char **)(dword_106B31C8 + 60);
        if ( !v4 )
          v4 = String;
        if ( !_stricmp(*v3, v4) )
        {
          v5 = (_BYTE *)(this + 840);
          v6 = (int)((double)(*(unsigned __int8 *)(this + 840) + *(unsigned __int8 *)(this + 844)) * 0.5);
          if ( *(_BYTE *)(this + 840) != v6 )
          {
            (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 840);
            *v5 = v6;
          }
          v7 = (int)((double)(*(unsigned __int8 *)(this + 841) + *(unsigned __int8 *)(this + 845)) * 0.5);
          if ( *(_BYTE *)(this + 841) != v7 )
          {
            (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 840);
            *(_BYTE *)(this + 841) = v7;
          }
          v8 = (int)((double)(*(unsigned __int8 *)(this + 842) + *(unsigned __int8 *)(this + 846)) * 0.5);
          if ( *(_BYTE *)(this + 842) != v8 )
          {
            (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 840);
            *(_BYTE *)(this + 842) = v8;
          }
          v9 = (int)((double)(*(unsigned __int8 *)(this + 843) + *(unsigned __int8 *)(this + 847)) * 0.5);
          if ( *(_BYTE *)(this + 843) != v9 )
          {
            (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 840);
            *(_BYTE *)(this + 843) = v9;
          }
          if ( *(_DWORD *)(this + 844) != *(_DWORD *)v5 )
          {
            (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 844);
            *(_DWORD *)(this + 844) = *(_DWORD *)v5;
          }
        }
        result = (char *)(v11 + 1);
        v10 = off_1064ACE0[v11 + 1] == 0;
        v3 = &off_1064ACE0[++v11];
      }
      while ( !v10 );
    }
  }
  return result;
}
