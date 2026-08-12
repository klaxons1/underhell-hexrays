int __userpurge sub_102FB990@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int result; // eax
  int *v7; // eax
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // st7
  int v13; // edx
  int v14; // eax
  float *v15; // eax
  float *v16; // [esp-14h] [ebp-A8h]
  float v17; // [esp+4h] [ebp-90h]
  _BYTE v18[44]; // [esp+Ch] [ebp-88h] BYREF
  float v19; // [esp+38h] [ebp-5Ch]
  _BYTE v20[12]; // [esp+60h] [ebp-34h] BYREF
  int v21[3]; // [esp+6Ch] [ebp-28h] BYREF
  float v22[3]; // [esp+78h] [ebp-1Ch] BYREF
  float v23[3]; // [esp+84h] [ebp-10h] BYREF
  float v24; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)a1[919] )
    return 0;
  v7 = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
  sub_10260A10(a2, a3, v7, 0.25, (float *)v21);
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v8 = *(float *)v21 - a1[145];
  v9 = v8 * v8;
  v10 = *(float *)&v21[1] - a1[146];
  v11 = *(float *)&v21[2] - a1[147];
  v17 = v11 * v11 + v10 * v10 + v9;
  v12 = off_10689708(v17);
  v13 = *((_DWORD *)a1 + 63);
  v24 = v12;
  if ( (v13 & 0x800) != 0 )
    sub_100DAE60((int)a1);
  (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 904))(a1, v20);
  if ( v24 <= 175.0 )
  {
    if ( v24 >= 64.0 )
    {
      v14 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
      v23[0] = 8.0;
      v23[1] = 8.0;
      v23[2] = 8.0;
      v22[0] = -8.0;
      v22[1] = -8.0;
      v22[2] = -8.0;
      v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 576))(v14);
      v15 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 576))(a1);
      sub_100231A0((int)&savedregs, (int)a1, v15, v16, v22, v23, 16395, (int)a1, 0, (int)v18);
      if ( v19 < 1.0 )
        return 0;
      *((_BYTE *)a1 + 4112) = (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 296))(a1) != 0;
      return 24;
    }
    else
    {
      result = 38;
      a1[919] = *(float *)(dword_106B31C8 + 12) + 0.2;
    }
  }
  else
  {
    result = 39;
    a1[919] = *(float *)(dword_106B31C8 + 12) + 0.2;
  }
  return result;
}
