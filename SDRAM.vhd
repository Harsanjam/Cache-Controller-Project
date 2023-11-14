----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:54:32 10/29/2023 
-- Design Name: 
-- Module Name:    SDRAM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SDRAM is
Port (
		clk : in STD_LOGIC;
		SDRAM_addr : in STD_LOGIC_VECTOR(15 downto 0);
		SDRAM_rw	: in STD_LOGIC;
		SDRAM_memstrb   : in STD_LOGIC;
		SDRAM_din : in STD_LOGIC_VECTOR(7 downto 0);
		SDRAM_dout : out STD_LOGIC_VECTOR(7 downto 0)
	);
end SDRAM;

architecture Behavioral of SDRAM is

begin


end Behavioral;

