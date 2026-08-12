int __thiscall sub_101ABBE0(char **this)
{
  int v1; // ebx
  char **v2; // edi
  _DWORD *v3; // eax
  const char *v4; // ecx
  const char *v5; // eax
  int v6; // esi
  _DWORD *v7; // edi
  int *v8; // ecx
  int result; // eax
  int v11; // [esp+10h] [ebp-Ch]
  char **v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v1 = (int)this;
  v2 = this + 205;
  v13 = 0;
  v12 = this + 205;
  v11 = -820 - (_DWORD)this;
  do
  {
    if ( *v2 )
    {
      v3 = sub_1012C5B0(0, *v2, v1, 0, 0);
      if ( v3 )
      {
        v6 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
        v7 = (char **)((char *)v2 + v11 + v1 + 1072);
        if ( *v7 != v6 )
        {
          if ( *(_BYTE *)(v1 + 84) )
          {
            *(_BYTE *)(v1 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v1 + 24);
            if ( v8 )
            {
              sub_100194B0(v8, 4 * v13 + 1072);
              v1 = (int)this;
            }
          }
          *v7 = v6;
        }
        v2 = v12;
      }
      else
      {
        v4 = *v2;
        if ( !*v2 )
          v4 = String;
        v5 = *(const char **)(v1 + 260);
        if ( !v5 )
          v5 = String;
        Warning("Particle system %s could not find control point entity (%s)\n", v5, v4);
      }
    }
    result = v13 + 1;
    ++v2;
    v13 = result;
    v12 = v2;
  }
  while ( result < 63 );
  return result;
}
