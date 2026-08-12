int __thiscall sub_1003C280(_DWORD *this, int a2)
{
  int v3; // ecx
  _DWORD **v4; // esi
  int result; // eax
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  bool v15; // zf
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  int v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]

  v3 = this[4];
  v4 = (_DWORD **)(this + 1);
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v6 = *v4;
  while ( *v6 != a2 )
  {
    ++result;
    ++v6;
    if ( result >= v3 )
      goto LABEL_7;
  }
  if ( result == -1 )
  {
LABEL_7:
    v7 = this[2];
    v8 = v3;
    if ( v3 + 1 > v7 )
      sub_1010AFF0(v3 - v7 + 1);
    ++this[4];
    v9 = *v4;
    v10 = this[4] - v8 - 1;
    this[5] = this[1];
    if ( v10 > 0 )
      memcpy(&v9[v8 + 1], &v9[v8], 4 * v10);
    result = (int)&(*v4)[v8];
    if ( result )
      *(_DWORD *)result = a2;
    v11 = this[4];
    v19 = v11;
    if ( v11 >= 2 )
    {
      result = 1;
      v22 = 0;
      v18 = 1;
      v17 = this[4];
      do
      {
        v23 = result;
        if ( result < v11 )
        {
          do
          {
            v12 = (*v4)[v22];
            v20 = (*v4)[v23];
            v13 = sub_1007A770(v12);
            v14 = sub_1007A770(v20);
            v21 = v14;
            if ( v13 )
            {
              if ( v14 )
              {
                if ( (*(int (**)(void))(*(_DWORD *)(v13 + 8) + 36))() == -1
                  || (*(int (__thiscall **)(int))(*(_DWORD *)(v21 + 8) + 36))(v21 + 8) == -1
                  || (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 8) + 36))(v13 + 8),
                      v16 >= (*(int (__thiscall **)(int))(*(_DWORD *)(v21 + 8) + 36))(v21 + 8)) )
                {
                  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v21 + 8) + 36))(v21 + 8) != -1 )
                  {
                    (*v4)[v22] = v20;
                    (*v4)[v23] = v12;
                  }
                }
              }
            }
            ++v23;
          }
          while ( v23 < v19 );
          v11 = v19;
          result = v18;
        }
        ++v22;
        ++result;
        v15 = v17-- == 1;
        v18 = result;
      }
      while ( !v15 );
    }
  }
  return result;
}
