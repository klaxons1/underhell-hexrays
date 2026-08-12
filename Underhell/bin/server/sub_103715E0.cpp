int __userpurge sub_103715E0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4, float *a5)
{
  double v6; // st7
  double v7; // st7
  int result; // eax
  int v9; // esi
  float v11[18]; // [esp+0h] [ebp-60h] BYREF
  __int16 v12; // [esp+48h] [ebp-18h]
  int v13; // [esp+4Ch] [ebp-14h]
  int v14; // [esp+50h] [ebp-10h]
  int v15; // [esp+54h] [ebp-Ch]
  char v16; // [esp+58h] [ebp-8h]

  v11[3] = 0.0;
  v12 = 0;
  v11[4] = 0.0;
  v11[5] = 0.0;
  v11[9] = 0.0;
  v11[10] = 0.0;
  v11[11] = 0.0;
  v11[14] = 1.0;
  v11[12] = 0.0;
  v11[13] = 0.0;
  v11[15] = 0.0;
  v11[17] = 0.0;
  v11[16] = 0.0;
  v13 = 0;
  v6 = *a4;
  v14 = 0;
  v11[0] = v6;
  v15 = 0;
  v7 = a4[1];
  v16 = 0;
  v11[1] = v7;
  v11[2] = a4[2];
  v11[6] = *a5;
  v11[7] = a5[1];
  v11[8] = a5[2];
  sub_1028E890((int)"HunterDamage", (int)v11);
  result = (*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
             dword_106B31E4,
             0,
             1,
             a3,
             a2);
  if ( !result )
  {
    v9 = sub_101811E0("sparktrail", -1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 76))(v9, a1);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
  }
  return result;
}
