int sub_100C5550()
{
  char v1; // [esp-50h] [ebp-50h] BYREF
  int v2; // [esp-4Ch] [ebp-4Ch]
  int v3; // [esp-48h] [ebp-48h]
  int v4; // [esp-44h] [ebp-44h]
  float v5; // [esp-40h] [ebp-40h]
  float v6; // [esp-3Ch] [ebp-3Ch]
  int v7; // [esp-38h] [ebp-38h]
  int v8; // [esp-34h] [ebp-34h]
  int v9; // [esp-30h] [ebp-30h]
  int v10; // [esp-2Ch] [ebp-2Ch]
  int v11; // [esp-28h] [ebp-28h]
  int v12; // [esp-24h] [ebp-24h]
  float v13; // [esp-20h] [ebp-20h]
  int v14; // [esp-1Ch] [ebp-1Ch]
  int v15; // [esp-18h] [ebp-18h]
  int v16; // [esp-14h] [ebp-14h]
  int v17; // [esp-10h] [ebp-10h]
  int v18; // [esp-Ch] [ebp-Ch]
  int v19; // [esp-8h] [ebp-8h]
  int (__cdecl *v20)(int, int, int); // [esp-4h] [ebp-4h]

  if ( (dword_10696648 & 1) == 0 )
  {
    dword_10696648 |= 1u;
    sub_10122040(&unk_106965B0, "should_never_see_this", 0, 4, -1, 0, 0);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_101221E0(&v1, 0, 0, &unk_10696694, std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122AC0(
      (int)&unk_106965FC,
      (char)"m_AnimOverlay",
      1120,
      76,
      (int)sub_100C5510,
      15,
      v1,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      (int)v20);
    atexit(sub_1046F900);
  }
  sub_10121D00(&unk_106965FC, 1, off_1060DC1C);
  return 1;
}
