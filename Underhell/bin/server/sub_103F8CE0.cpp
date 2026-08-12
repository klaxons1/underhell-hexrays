void __userpurge sub_103F8CE0(int a1@<esi>, int *a2, float *a3, float *a4)
{
  int v4; // eax
  int v5; // eax
  int (__stdcall *v6)(int *); // edx
  int v7; // eax
  int v8; // [esp-Ch] [ebp-78h]
  _BYTE v9[12]; // [esp+0h] [ebp-6Ch] BYREF
  float v10; // [esp+Ch] [ebp-60h]
  float v11; // [esp+10h] [ebp-5Ch]
  float v12; // [esp+14h] [ebp-58h]
  float v13; // [esp+2Ch] [ebp-40h]
  char v14; // [esp+36h] [ebp-36h]
  char v15; // [esp+37h] [ebp-35h]
  float v16[3]; // [esp+54h] [ebp-18h] BYREF
  float v17[3]; // [esp+60h] [ebp-Ch] BYREF
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  v4 = a2[105];
  v17[0] = 6.0;
  v17[1] = 6.0;
  v17[2] = 6.0;
  v8 = v4;
  v16[0] = -6.0;
  v5 = *a2;
  v16[1] = -6.0;
  v6 = *(int (__stdcall **)(int *))(v5 + 636);
  v16[2] = -6.0;
  v7 = v6(a2);
  sub_100231A0((int)&savedregs, (int)a4, a3, a4, v16, v17, v7, v8, (int)v9, a1);
  if ( v13 < 1.0 || v14 || v15 )
  {
    *a4 = v10;
    a4[1] = v11;
    a4[2] = v12;
  }
}
