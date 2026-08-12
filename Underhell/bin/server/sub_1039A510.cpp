void __thiscall sub_1039A510(_DWORD *this, int a2)
{
  int v2; // esi
  const char *v4; // eax
  const char *v5; // ecx
  const char *v6; // ecx
  _DWORD *v7; // eax
  float *v8; // edi
  int *v9; // ecx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  float **v15; // eax
  _DWORD *v16; // eax

  v2 = a2;
  if ( a2 )
  {
    v4 = *(const char **)(a2 + 92);
    if ( !v4 )
      v4 = String;
    v5 = (const char *)dword_106EA240;
    if ( !dword_106EA240 )
      v5 = String;
    if ( v4 == v5 )
      goto LABEL_10;
    v6 = (const char *)dword_106EA23C;
    if ( !dword_106EA23C )
      v6 = String;
    if ( v4 == v6 )
LABEL_10:
      dword_106EA24C = 1;
  }
  byte_106EA248 = 0;
  dword_106EA230 = (int)this;
  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 220))(this) == 3 || sub_100296A0(this))
    && (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    if ( v2 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 1868))(this) + 17) <= 1u )
        return;
    }
    else
    {
      byte_106EA248 = 1;
    }
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
    v8 = (float *)sub_10077AB0(v7, (unsigned __int8 *)&a2);
    if ( v8 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v8 != -1 )
        {
          v9 = &off_1061BE18[4 * (*(_DWORD *)v8 & 0xFFF) + 1];
          if ( off_1061BE18[4 * (*(_DWORD *)v8 & 0xFFF) + 2] == *(_DWORD *)v8 >> 12 )
          {
            if ( *v9 )
            {
              v10 = *v9;
              if ( v10 == (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
                goto LABEL_26;
              if ( -3.402823466385289e38 != v8[12] && *(float *)(dword_106B31C8 + 12) - v8[7] <= 10.0 )
                break;
            }
          }
        }
LABEL_32:
        v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
        v8 = (float *)sub_10077340(v16, (unsigned __int8 *)&a2);
        if ( !v8 )
          goto LABEL_33;
      }
      byte_106EA248 = 1;
LABEL_26:
      v11 = dword_106EA38C;
      v12 = dword_106EA38C;
      if ( dword_106EA38C + 1 > dword_106EA384 )
      {
        sub_102ABFC0(&dword_106EA380, dword_106EA38C - dword_106EA384 + 1);
        v11 = dword_106EA38C;
      }
      v13 = dword_106EA380;
      dword_106EA38C = v11 + 1;
      v14 = v11 - v12;
      dword_106EA390 = dword_106EA380;
      if ( v14 > 0 )
      {
        memcpy((void *)(dword_106EA380 + 4 * v12 + 4), (const void *)(dword_106EA380 + 4 * v12), 4 * v14);
        v13 = dword_106EA380;
      }
      v15 = (float **)(v13 + 4 * v12);
      if ( v15 )
        *v15 = v8;
      goto LABEL_32;
    }
LABEL_33:
    if ( dword_106EA38C )
    {
      if ( byte_106EA248 )
        sub_1019E300((int)&dword_106EA380, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10398B50);
    }
    else
    {
      byte_106EA248 = 0;
    }
  }
}
