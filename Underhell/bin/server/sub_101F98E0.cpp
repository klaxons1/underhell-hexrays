int __thiscall sub_101F98E0(int **this, char a2)
{
  int result; // eax
  int *v3; // eax
  int **v4; // edi
  int v5; // edx
  int **v6; // eax
  int *v7; // ecx
  int *v8; // esi
  int v9; // ebx
  int **v10; // esi
  int v11; // ecx
  int **v12; // eax
  int v13; // edi
  int *v14; // [esp+8h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-10h]
  int *v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h]
  int **v18; // [esp+18h] [ebp-4h]

  result = (int)this[5];
  v18 = this;
  if ( result )
  {
    this[5] = *(int **)(result + 308);
  }
  else
  {
    v3 = this[7];
    v4 = this + 7;
    if ( v3 && (v5 = (int)this[8], v5 >= 0) && v5 < v3[1] )
    {
      v6 = sub_101F97F0(&v14, (int)(this + 7));
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
    v9 = (int)v6[1];
    if ( !*v6 || v9 < 0 || v9 >= v8[1] )
    {
      v10 = v18;
      sub_101F9520(v18, 1);
      if ( *v4 && (v11 = (int)v4[1], v11 >= 0) && v11 < (*v4)[1] )
      {
        v12 = sub_101F97F0(&v14, (int)v4);
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
      v9 = (int)v12[1];
      if ( !*v12 || v9 < 0 || v9 >= v8[1] )
        Error("CUtlLinkedList overflow!\n");
    }
    v4[1] = (int *)v9;
    *v4 = v8;
    if ( v8 && (v13 = (int)v4[1], v13 >= 0) && v13 < v8[1] )
    {
      this = v18;
      result = (int)&v8[78 * v13 + 2];
    }
    else
    {
      this = v18;
      result = 0;
    }
  }
  if ( a2 )
  {
    *(_DWORD *)(result + 308) = 0;
    *(_DWORD *)(result + 304) = 0;
  }
  else
  {
    *(_DWORD *)(result + 308) = result;
    *(_DWORD *)(result + 304) = result;
  }
  this[9] = 0;
  return result;
}
