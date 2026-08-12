int __thiscall sub_102709B0(int this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  double v6; // st7
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ebp
  int (__thiscall **v11)(int, _DWORD); // edi
  _DWORD *v12; // eax
  int result; // eax
  int v14; // [esp+8h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-10h] BYREF
  int v16; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+14h] [ebp-8h] BYREF
  int v18; // [esp+18h] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v16, (int)&v17);
  v2 = *(_DWORD *)(this + 212);
  v3 = 0;
  v15 = 0;
  v14 = 0;
  switch ( v2 )
  {
    case 0:
      v7 = *(_DWORD *)(this + 224) + *(_DWORD *)(this + 228);
      v14 = *(_DWORD *)(this + 232);
      v15 = 0;
      v18 = v16 / v7;
      v6 = (double)(v16 / v7);
      goto LABEL_6;
    case 1:
      v4 = *(_DWORD *)(this + 232);
      v5 = *(_DWORD *)(this + 224) + *(_DWORD *)(this + 228);
      v15 = v16;
      v14 = v4;
      v18 = v16 / v5;
      v6 = (double)(v16 / v5);
      goto LABEL_6;
    case 2:
      v8 = *(_DWORD *)(this + 224) + *(_DWORD *)(this + 228);
      v15 = *(_DWORD *)(this + 232);
      v14 = v17;
      v18 = v17 / v8;
      v6 = (double)(v17 / v8);
      goto LABEL_6;
    case 3:
      v9 = *(_DWORD *)(this + 224) + *(_DWORD *)(this + 228);
      v15 = *(_DWORD *)(this + 232);
      v14 = 0;
      v18 = v17 / v9;
      v6 = (double)(v17 / v9);
LABEL_6:
      v3 = (int)(v6 * *(float *)(this + 216));
      break;
    default:
      break;
  }
  v10 = dword_1047CA6C;
  v11 = (int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40);
  v12 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 228))(this, &v18);
  result = (*v11)(v10, *v12);
  if ( v3 > 0 )
  {
    do
    {
      result = sub_10270890((_DWORD *)this, &v15, &v14, v17, v16);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
