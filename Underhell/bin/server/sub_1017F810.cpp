int *sub_1017F810()
{
  if ( (dword_106B6508 & 1) == 0 )
  {
    dword_106B6508 |= 1u;
    dword_106B64EC = (int)"CMathCounter";
    dword_106B64F4 = 0;
    dword_106B64F8 = 0;
    dword_106B64FC = 0;
    dword_106B6500 = 0;
    dword_106B6504 = 0;
    dword_106B64F0 = 12;
    atexit(sub_10471FA0);
  }
  dword_1062CDE8 = (int)&dword_1060F348;
  if ( (dword_106B6508 & 2) == 0 )
  {
    dword_106B6508 |= 2u;
    dword_1062E5B0 = 0;
    dword_1062E5B4 = 0;
    dword_1062E5B8 = 0;
    dword_1062E5BC = 0;
    dword_1062E5C0 = 0;
    dword_1062E5C4 = 0;
    word_1062E5D8 = 1;
    word_1062E5DA = 22;
    dword_1062E5E4 = 0;
    dword_1062E5E8 = 0;
    dword_1062E5EC = 0;
    dword_1062E5F0 = 0;
    dword_1062E5F4 = 0;
    dword_1062E5F8 = 0;
    word_1062E60C = 1;
    word_1062E60E = 22;
    dword_1062E5AC = (int)off_10614A2C;
    dword_1062E5C8 = 11;
    dword_1062E5CC = (int)"m_OnHitMin";
    dword_1062E5D0 = 860;
    dword_1062E5D4 = 0;
    dword_1062E5DC = (int)"OnHitMin";
    dword_1062E5E0 = (int)off_10614A2C;
    dword_1062E5FC = 11;
    dword_1062E600 = (int)"m_OnHitMax";
    dword_1062E604 = 884;
    dword_1062E608 = 0;
    dword_1062E610 = (int)"OnHitMax";
    dword_1062E614 = (int)off_10614A2C;
    dword_1062E618 = 0;
    dword_1062E61C = 0;
    dword_1062E620 = 0;
    dword_1062E624 = 0;
    dword_1062E628 = 0;
    dword_1062E62C = 0;
    dword_1062E630 = 11;
    dword_1062E634 = (int)"m_OnGetValue";
    dword_1062E638 = 836;
    dword_1062E63C = 0;
    dword_1062E640 = 1441793;
    dword_1062E644 = (int)"OnGetValue";
    dword_1062E648 = (int)off_10614A2C;
    dword_1062E64C = 0;
    dword_1062E650 = 0;
    dword_1062E654 = 0;
    dword_1062E658 = 0;
    dword_1062E65C = 0;
    dword_1062E660 = 0;
  }
  dword_1062CDE0 = 20;
  dword_1062CDDC = (int)&unk_1062E254;
  return &dword_1062CDDC;
}
