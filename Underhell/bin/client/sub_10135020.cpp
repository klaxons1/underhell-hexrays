int __thiscall sub_10135020(int this)
{
  int result; // eax
  int v2; // ebx
  int v4; // edi
  int *v5; // eax
  int v6; // [esp+20h] [ebp-2Ch] BYREF
  int v7; // [esp+24h] [ebp-28h]
  int v8; // [esp+28h] [ebp-24h]
  int v9; // [esp+2Ch] [ebp-20h]
  int v10; // [esp+30h] [ebp-1Ch]
  int v11; // [esp+34h] [ebp-18h] BYREF
  int v12; // [esp+38h] [ebp-14h] BYREF
  int v13; // [esp+3Ch] [ebp-10h] BYREF
  float v14; // [esp+40h] [ebp-Ch] BYREF
  int v15; // [esp+44h] [ebp-8h] BYREF
  int v16; // [esp+48h] [ebp-4h] BYREF

  result = dword_104398A4;
  *(float *)&v13 = 0.0;
  v2 = *(_DWORD *)(dword_104398A4 + 48);
  v14 = 0.0;
  v15 = 0;
  if ( !v2 )
  {
    if ( (byte_104326A0 & 1) == 0 )
      return result;
    v2 = 2;
  }
  if ( *(float *)(dword_104396AC + 44) <= 0.0 )
    sub_10229120(0.1);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v12, &v11);
  v6 = 0;
  v7 = 0;
  v4 = *(_DWORD *)(this + 57756);
  v8 = v12;
  v9 = v11;
  if ( v4 > 1024 )
    v4 = 1024;
  if ( v12 < v4 + 10 )
    v4 = v12 - 10;
  v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 284))(dword_1041315C);
  v16 = (int)v5;
  if ( v5 )
  {
    sub_101330D0(this, v5, &v15, (float *)&v13, &v14);
    sub_10132F20((_DWORD *)this, v16, this + 8480);
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v16 + 96))(v16, &v13, this + 57768);
    if ( *(float *)&v13 > 0.001 )
      *(float *)(this + 57764) = 1.0 / *(float *)&v13;
  }
  sub_10133390(&v6, v4, &v16, &v13);
  if ( v2 > 1 )
  {
    sub_10134B40(this, v16, v13, v4, v2, v15);
    sub_10132FA0((_DWORD *)this, v16, v4, v2, v14);
  }
  sub_10134720(this, v10, v6, v7, v8, v9, v10, this + 8480, v16, v4, v2);
  return sub_10133840(this, v4, v2, v16, v13, v4, this + 20768, this + 8480);
}
