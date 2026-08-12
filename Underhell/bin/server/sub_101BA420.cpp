int __thiscall sub_101BA420(int this, int a2, int a3, int a4)
{
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  _DWORD v11[1024]; // [esp+Ch] [ebp-1020h] BYREF
  _BYTE v12[12]; // [esp+100Ch] [ebp-20h] BYREF
  _BYTE v13[12]; // [esp+1018h] [ebp-14h] BYREF
  int v14; // [esp+1024h] [ebp-8h]
  float *v15; // [esp+1028h] [ebp-4h]
  int v16; // [esp+1034h] [ebp+8h]
  int v17; // [esp+1038h] [ebp+Ch]

  ++*(_DWORD *)(this + 348);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
  v7 = result;
  v15 = (float *)result;
  if ( v5 && result )
  {
    v14 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v5 + 624))(v5, v11, 1024);
    v17 = 0;
    v16 = 0;
    if ( v14 <= 0 )
    {
LABEL_6:
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 4))(a4, v13);
      (**(void (__thiscall ***)(int, _BYTE *))a4)(a4, v12);
      if ( !*(_BYTE *)(this + 356) )
      {
        sub_101C5B20(v5, v7);
        result = sub_101C5B20(v7, v5);
        --*(_DWORD *)(this + 348);
        return result;
      }
      v8 = sub_101B93B0((int *)(this + 228));
      v9 = *(_DWORD *)(this + 228);
      v10 = 9 * v8;
      *(_DWORD *)(v9 + 4 * v10) = v5;
      *(_DWORD *)(v9 + 4 * v10 + 4) = v7;
      *(_DWORD *)(v9 + 4 * v10 + 8) = 1;
      result = v9 + 36 * v8;
      *(float *)(result + 12) = flt_106F1CA8;
      *(float *)(result + 16) = flt_106F1CAC;
      *(float *)(result + 20) = flt_106F1CB0;
      *(float *)(result + 24) = flt_106F1CA8;
      *(float *)(result + 28) = flt_106F1CAC;
      *(float *)(result + 32) = flt_106F1CB0;
    }
    else
    {
      while ( 1 )
      {
        result = sub_101B5260(v11[v16], v7);
        v17 += result;
        if ( v17 > 1 )
          break;
        v7 = (int)v15;
        if ( ++v16 >= v14 )
          goto LABEL_6;
      }
    }
  }
  --*(_DWORD *)(this + 348);
  return result;
}
