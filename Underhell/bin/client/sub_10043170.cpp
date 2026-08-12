void __thiscall sub_10043170(int this, int a2, float a3)
{
  float *v4; // eax
  double v5; // st4
  double v6; // st6
  float v7; // [esp+4h] [ebp-24h]
  float v8; // [esp+4h] [ebp-24h]
  float v9[3]; // [esp+Ch] [ebp-1Ch] BYREF
  float v10; // [esp+18h] [ebp-10h] BYREF
  float v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]

  v13 = *(float *)(this + 1816);
  v4 = (float *)sub_10034A00((char *)this);
  v10 = *v4;
  v11 = v4[1];
  v12 = v4[2];
  sub_10025400(this);
  v7 = *((float *)off_103DC81C + 3) + a3;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 380))(this, LODWORD(v7));
  *(float *)(this + 1816) = fmod(*(float *)(this + 1236) * a3 + v13 + 10.0, 1.0);
  v5 = *(float *)(this + 240);
  v6 = *(float *)(this + 236) * a3;
  v9[0] = a3 * *(float *)(this + 232) + v10;
  v9[1] = v6 + v11;
  v9[2] = a3 * v5 + v12;
  sub_10034A30((float *)this, v9);
  v8 = *((float *)off_103DC81C + 3) + a3;
  (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)(this + 4) + 64))(a2, 128, 524032, LODWORD(v8));
  *(float *)(this + 1816) = v13;
  sub_10034A30((float *)this, &v10);
}
