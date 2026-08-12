int __thiscall sub_1026A860(
        int (__thiscall ***this)(void *, int, int),
        int (__thiscall ***a2)(void *, int, int),
        int a3,
        int a4,
        char a5)
{
  int (__thiscall ***v5)(void *, int *, int *); // esi
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int (__thiscall ***v12)(void *, int, int); // esi
  int result; // eax
  int v14; // [esp+10h] [ebp-20h] BYREF
  int v15; // [esp+14h] [ebp-1Ch] BYREF
  int v16; // [esp+18h] [ebp-18h] BYREF
  int v17; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-Ch] BYREF
  int v20; // [esp+28h] [ebp-8h] BYREF
  int (__thiscall ***v21)(void *, int, int); // [esp+2Ch] [ebp-4h]

  v5 = (int (__thiscall ***)(void *, int *, int *))a2;
  v21 = this;
  sub_10236250(a2, (int)&a2, (int)&v14, (int)&v16, (int)&v15);
  sub_10236F10(v5, &a2, &v14);
  v7 = a3;
  if ( a3 == 4 )
  {
    (*(void (__thiscall **)(int, int (__thiscall ****)(void *, int, int), int *))(*(_DWORD *)dword_1047CA68 + 28))(
      dword_1047CA68,
      &a2,
      &v14);
    v15 = 0;
    v16 = 0;
  }
  else if ( a3 == 5 && ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*v5)[37])(v5) )
  {
    a2 = 0;
    v14 = 0;
    sub_10236FB0(v5, &a2, &v14);
    a2 = (int (__thiscall ***)(void *, int, int))((char *)a2 - 1);
    v14 += a4 + v15;
    v15 = 0;
    v16 = 0;
  }
  else
  {
    a2 = 0;
    v14 = 0;
    sub_10236F10(v5, &a2, &v14);
  }
  sub_1026A800(this, (int)&v18, &v20);
  sub_102361D0(this, (int)&v17, (int)&v19);
  v8 = v18;
  v9 = v17;
  if ( v7 != 2 )
  {
    v10 = v15 + v14 + 1;
    v8 = v18;
    v11 = (int)a2;
    if ( v10 + v19 >= v20 )
    {
      if ( v19 >= v14 )
      {
        v9 = v17;
        v11 = (int)a2 + v16;
        v10 = v20 - v19;
        if ( (int)a2 + v16 + v17 > v18 )
          v11 = (int)a2 - v17;
        goto LABEL_14;
      }
      v10 = v14 - v19;
    }
    v9 = v17;
    goto LABEL_14;
  }
  v10 = v14 - v19;
  v11 = (int)a2;
  if ( v14 - v19 < 0 )
  {
    a3 = v15 + v14 + 1;
    if ( v19 < v20 - a3 )
    {
      v10 = a3;
    }
    else
    {
      v11 = (int)a2 + v16;
      v10 = v20 - v19;
      if ( (int)a2 + v16 + v17 > v18 )
        v11 = (int)a2 - v17;
    }
  }
LABEL_14:
  if ( v9 + v11 <= v8 )
  {
    if ( v11 < 0 )
      v11 = 0;
  }
  else
  {
    v11 = v8 - v9;
  }
  v12 = v21;
  result = sub_10236140(v21, v11, v10);
  if ( a5 )
    return ((int (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*v12)[31])(v12, 1);
  return result;
}
