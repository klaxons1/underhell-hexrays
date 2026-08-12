void __thiscall sub_10001B80(int this, char *Source, wchar_t *a3, wchar_t *a4)
{
  unsigned __int16 v5; // ax
  int v6; // esi
  int v7; // esi

  v5 = sub_10001240((int *)(this + 320), 0);
  v6 = v5;
  sub_100014A0(this + 320, 0xFFFFu, v5);
  v7 = *(_DWORD *)(this + 320) + 1280 * v6;
  sub_102282F0((char *)v7, Source, 0xFFu);
  sub_10228330((wchar_t *)(v7 + 256), a3, 510);
  sub_10228330((wchar_t *)(v7 + 766), a4, 510);
  if ( *(float *)(this + 300) == 0.0 )
    sub_100018B0(this);
}
