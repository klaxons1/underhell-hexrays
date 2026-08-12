int __thiscall sub_100DD4B0(_DWORD *this, int a2)
{
  int v3; // ecx
  double v4; // st7
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int result; // eax
  int v9; // eax
  float v10; // [esp+18h] [ebp-A8h]
  float v11; // [esp+1Ch] [ebp-A4h]
  float v12; // [esp+20h] [ebp-A0h]
  float v13; // [esp+20h] [ebp-A0h]
  int v14[16]; // [esp+28h] [ebp-98h] BYREF
  int v15[16]; // [esp+68h] [ebp-58h] BYREF
  float v16[2]; // [esp+A8h] [ebp-18h] BYREF
  float v17; // [esp+B0h] [ebp-10h] BYREF
  float v18; // [esp+B4h] [ebp-Ch]
  float v19; // [esp+B8h] [ebp-8h] BYREF
  float v20; // [esp+BCh] [ebp-4h]

  v19 = 0.5;
  v3 = this[3];
  v20 = 0.5;
  v4 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  if ( v3 )
  {
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v3 + 112))(v3, &v19, 2);
    v4 = 0.0;
  }
  v12 = v4;
  v11 = -v20;
  v10 = -v19;
  sub_101F23F0((int)v15, v10, v11, v12);
  v5 = this[4];
  if ( v5 )
  {
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v5 + 112))(v5, v16, 2);
    sub_101F24C0((int)v14, v16[0], v16[1], 1.0);
    sub_101F1FF0(v14, v15, v15);
  }
  v6 = this[5];
  if ( v6 )
  {
    v13 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 108))(v6);
    sub_101F2470((int)v14, v13);
    sub_101F1FF0(v14, v15, v15);
  }
  sub_101F23F0((int)v14, v19, v20, 0.0);
  sub_101F1FF0(v14, v15, v15);
  v7 = this[6];
  if ( v7 )
  {
    (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v7 + 112))(v7, &v17, 2);
    sub_101F23F0((int)v14, v17, v18, 0.0);
    sub_101F1FF0(v14, v15, v15);
  }
  (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this[1] + 76))(this[1], v15);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
    return sub_101BCA60(v9);
  }
  return result;
}
