int __thiscall sub_10165FD0(float *this, int a2)
{
  float *v2; // eax
  float v4; // [esp+20h] [ebp-2Ch]
  float v5; // [esp+28h] [ebp-24h]
  float v6; // [esp+2Ch] [ebp-20h]
  float v7; // [esp+34h] [ebp-18h]
  float v8; // [esp+38h] [ebp-14h]
  float v9; // [esp+3Ch] [ebp-10h]
  float v10; // [esp+40h] [ebp-Ch]

  v10 = (float)*((int *)this + 14);
  v2 = this + 18;
  v9 = (float)*((int *)this + 13);
  v8 = (float)*((int *)this + 12);
  v7 = (double)*((int *)this + 6) * 0.1;
  v6 = 0.1 * (double)*((int *)this + 16);
  v5 = (float)*((int *)this + 15);
  v4 = (float)*((int *)this + 10);
  return (*((int (__thiscall **)(void ***, float *, float, float, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*off_103E773C[0]
          + 15))(
           off_103E773C[0],
           v2,
           v2[3],
           v2[4],
           *((_DWORD *)v2 - 15),
           *((_DWORD *)v2 - 14),
           0.0,
           *(v2 - 11),
           *(v2 - 10),
           *(v2 - 9),
           LODWORD(v4),
           *(v2 - 7),
           LODWORD(v5),
           LODWORD(v6),
           *((_DWORD *)this + 5),
           LODWORD(v7),
           LODWORD(v8),
           LODWORD(v9),
           LODWORD(v10),
           *((_DWORD *)this + 17));
}
