int __thiscall sub_100517B0(int *this, char a2)
{
  int result; // eax
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // edx
  int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // ebx
  int *v10; // esi
  int v11; // ecx
  int *v12; // eax
  int v13; // edi
  int v14; // [esp+8h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h]
  int *v18; // [esp+18h] [ebp-4h]

  result = this[5];
  v18 = this;
  if ( result )
  {
    this[5] = *(_DWORD *)(result + 72);
  }
  else
  {
    v3 = this[7];
    v4 = this + 7;
    if ( v3 && (v5 = this[8], v5 >= 0) && v5 < *(_DWORD *)(v3 + 4) )
    {
      v6 = (int *)sub_101F97F0(&v14, this + 7);
    }
    else
    {
      v7 = *this;
      if ( v7 )
      {
        v16 = v7;
        v17 = 0;
      }
      else
      {
        v16 = 0;
        v17 = -1;
      }
      v14 = v16;
      v15 = v17;
      v6 = &v14;
    }
    v8 = *v6;
    v9 = v6[1];
    if ( !*v6 || v9 < 0 || v9 >= *(_DWORD *)(v8 + 4) )
    {
      v10 = v18;
      sub_10050E00(v18, 1);
      if ( *v4 && (v11 = v4[1], v11 >= 0) && v11 < *(_DWORD *)(*v4 + 4) )
      {
        v12 = (int *)sub_101F97F0(&v14, v4);
      }
      else
      {
        if ( *v10 )
        {
          v14 = *v10;
          v15 = 0;
        }
        else
        {
          v14 = 0;
          v15 = -1;
        }
        v16 = v14;
        v17 = v15;
        v12 = &v16;
      }
      v8 = *v12;
      v9 = v12[1];
      if ( !*v12 || v9 < 0 || v9 >= *(_DWORD *)(v8 + 4) )
        Error("CUtlLinkedList overflow!\n");
    }
    v4[1] = v9;
    *v4 = v8;
    if ( v8 && (v13 = v4[1], v13 >= 0) && v13 < *(_DWORD *)(v8 + 4) )
    {
      this = v18;
      result = 76 * v13 + v8 + 8;
    }
    else
    {
      this = v18;
      result = 0;
    }
  }
  if ( a2 )
  {
    *(_DWORD *)(result + 72) = 0;
    *(_DWORD *)(result + 68) = 0;
  }
  else
  {
    *(_DWORD *)(result + 72) = result;
    *(_DWORD *)(result + 68) = result;
  }
  this[9] = 0;
  return result;
}
