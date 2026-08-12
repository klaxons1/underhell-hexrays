int __thiscall sub_101F9B80(int *this)
{
  char *v1; // eax
  int *v2; // edx
  char *v3; // eax
  _DWORD *v4; // eax
  int **v5; // eax
  int v6; // ebx
  int *v7; // edi
  _DWORD *v8; // edi
  int *v10; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // [esp-4h] [ebp-40h]
  _DWORD v14[2]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v15[2]; // [esp+14h] [ebp-28h] BYREF
  _DWORD v16[2]; // [esp+1Ch] [ebp-20h] BYREF
  _DWORD v17[2]; // [esp+24h] [ebp-18h] BYREF
  int v18; // [esp+2Ch] [ebp-10h]
  int v19; // [esp+30h] [ebp-Ch]
  char *v20; // [esp+34h] [ebp-8h]
  int *v21; // [esp+38h] [ebp-4h]

  v1 = (char *)(this + 174);
  v18 = (int)this;
  v19 = 16;
  v2 = this + 181;
  while ( 1 )
  {
    v2 -= 10;
    v3 = v1 - 40;
    v20 = v3;
    v21 = v2;
    if ( *v2 || v2[1] != -1 )
    {
      v4 = *(_DWORD **)v3;
      if ( v4 )
      {
        v17[0] = v4;
        v17[1] = 0;
        v5 = (int **)v17;
      }
      else
      {
        v16[0] = 0;
        v16[1] = -1;
        v5 = (int **)v16;
      }
LABEL_8:
      v6 = (int)v5[1];
      v7 = *v5;
      while ( 1 )
      {
        if ( v7 )
        {
          if ( v6 >= 0 && v6 < v7[1] )
          {
            if ( &v7[78 * v6] != (int *)-8
              && !sub_101F9620((unsigned int)&v7[78 * v6 + 2], v21)
              && ((int *)v7[78 * v6 + 78] != &v7[78 * v6 + 2] || (int *)v7[78 * v6 + 79] == &v7[78 * v6 + 2]) )
            {
              v10 = v21;
              v7[78 * v6 + 78] = (int)&v7[78 * v6 + 2];
              v7[78 * v6 + 79] = *(v10 - 2);
              *(v10 - 2) = (int)&v7[78 * v6 + 2];
            }
            v2 = v21;
          }
        }
        else if ( v6 == -1 )
        {
          break;
        }
        if ( v7 == (int *)*v2 && v6 == v2[1] )
          break;
        if ( v7 && v6 >= 0 && (v11 = v7[1], v6 < v11) )
        {
          if ( ++v6 >= v11 )
          {
            v12 = *v7;
            if ( v12 )
            {
              v15[0] = v12;
              v15[1] = 0;
              v5 = (int **)v15;
            }
            else
            {
              v14[0] = 0;
              v14[1] = -1;
              v5 = (int **)v14;
            }
            goto LABEL_8;
          }
        }
        else
        {
          v7 = 0;
          v6 = -1;
        }
      }
      v3 = v20;
      *(v2 - 4) = 0;
      *(v2 - 3) = 0;
      *(v2 - 1) = 0;
    }
    v8 = *(_DWORD **)v3;
    if ( *(_DWORD *)v3 )
    {
      do
      {
        v13 = v8;
        v8 = (_DWORD *)*v8;
        (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
      }
      while ( v8 );
      v2 = v21;
      *(_DWORD *)v20 = 0;
      *(v2 - 6) = 0;
    }
    if ( --v19 < 0 )
      return sub_10170190((_DWORD *)v18);
    v1 = v20;
  }
}
