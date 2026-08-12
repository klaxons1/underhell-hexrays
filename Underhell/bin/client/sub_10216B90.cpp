int __thiscall sub_10216B90(int this, int a2, int a3, int a4)
{
  float v6; // [esp+10h] [ebp-3Ch] BYREF
  __int64 v7; // [esp+14h] [ebp-38h]
  int v8[12]; // [esp+1Ch] [ebp-30h] BYREF

  if ( *(_BYTE *)(this + 44) )
  {
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 48), (float *)(this + 80));
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 48), *(_DWORD *)(this + 52));
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 56), (float *)(this + 92));
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 56), *(_DWORD *)(this + 60));
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 64), (float *)(this + 104));
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 64), *(_DWORD *)(this + 68));
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 72), (float *)(this + 116));
    return sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 72), *(_DWORD *)(this + 76));
  }
  else
  {
    sub_101F8FA0((char *)a2, *(_DWORD *)(this + 128), *(float *)(a2 + 36), (float *)v8);
    v6 = flt_10459240;
    v7 = qword_10459244;
    sub_101ED860((float *)(this + 80), (float *)v8, &v6);
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 48), &v6);
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 48), *(_DWORD *)(this + 52));
    sub_101ED860((float *)(this + 92), (float *)v8, &v6);
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 56), &v6);
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 56), *(_DWORD *)(this + 60));
    sub_101ED860((float *)(this + 104), (float *)v8, &v6);
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 64), &v6);
    sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 64), *(_DWORD *)(this + 68));
    sub_101ED860((float *)(this + 116), (float *)v8, &v6);
    sub_100F16D0((_DWORD *)a2, *(_DWORD *)(this + 72), &v6);
    return sub_10058FF0((_DWORD *)a2, *(_DWORD *)(this + 72), *(_DWORD *)(this + 76));
  }
}
